//My library
#include <my_library.h>

//Libraries used for GPS Module
#include <TinyGPS++.h>
#include <axp20x.h>

TinyGPSPlus gps;
HardwareSerial GPS(1);
AXP20X_Class axp;

//define the pins used by the LoRa transceiver module
#define SCK 5
#define MISO 19
#define MOSI 27
#define SS 18
#define RST 14
#define DIO0 26

//433E6 for Asia
//866E6 for Europe
//915E6 for North America
#define BAND 915E6


//packet counter
int counter = 0;

//External strings pulled from my_library.h configuration file
extern String logPrint;
extern int NUM_PARAMETERS;
extern int NUM_PACKETS;
extern int dly;

void setup()
{
  //initialize Serial Monitor
  Serial.begin(115200);

  Serial.println("LoRa Sender Test");

  //SPI LoRa pins
  SPI.begin(SCK, MISO, MOSI, SS);
  //setup LoRa transceiver module
  LoRa.setPins(SS, RST, DIO0);

  if (!LoRa.begin(BAND))
  {
    Serial.println("Starting LoRa failed!");
    while (1)
      ;
  }
  Serial.println("LoRa Initializing OK!");
  Wire.begin(21, 22);
  if (!axp.begin(Wire, AXP192_SLAVE_ADDRESS)) {
    Serial.println("AXP192 Begin PASS");
  } else {
    Serial.println("AXP192 Begin FAIL");
  }
  axp.setPowerOutPut(AXP192_LDO2, AXP202_ON);
  axp.setPowerOutPut(AXP192_LDO3, AXP202_ON);
  axp.setPowerOutPut(AXP192_DCDC2, AXP202_ON);
  axp.setPowerOutPut(AXP192_EXTEN, AXP202_ON);
  axp.setPowerOutPut(AXP192_DCDC1, AXP202_ON);
  GPS.begin(9600, SERIAL_8N1, 34, 12);   //17-TX 18-RX
  delay(dly*2);
}

void sendPacket()
{
  smartDelay(500);
  Serial.print("Sending packet: ");
  Serial.println(counter);

  //Send LoRa packet to receiver
  LoRa.beginPacket();
  float t_lat = gps.location.lat();
  float t_lng = gps.location.lng();

  String lat = String(t_lat,6);
  String lng = String(t_lng,6);
  
  Serial.println(lat + "," + lng);
  LoRa.print(counter);
  LoRa.print(",");
  LoRa.print(lat);
  LoRa.print(",");
  LoRa.print(lng);

  LoRa.endPacket();
  counter++;
  delay(dly);
}

void loop()
{
  for (int i = 0; i < NUM_PARAMETERS; i++)
  {
    // set new parameters
    setParameters(i);
    delay(dly*2);
    Serial.println(logPrint);
    Serial.println(i);

    for (int j = 0; j < NUM_PACKETS; j++)
    {
      sendPacket();
    }
  }
  Serial.println("Lora End!");
  LoRa.end();
  return;
}

static void smartDelay(unsigned long ms)
{
  unsigned long start = millis();
  do
  {
    while (GPS.available())
      gps.encode(GPS.read());
  } while (millis() - start < ms);
}
