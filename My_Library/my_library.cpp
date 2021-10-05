#include "my_library.h"

String logPrint; // variable to record logging data
int NUM_PARAMETERS = 4; // number of unique parameters passed 
int NUM_PACKETS = 20; // number of packets to send
int dly = 2000; // delay for transmission rate (ms)

/** 
 * Storing of parameters to cycle through
 * NOTE
 * From my testing, Spreading Factor must remain the same across the experiment and cannot be cycled.
 * Please see https://github.com/sandeepmistry/arduino-LoRa/blob/master/API.md for values each parameter can take.
 */

long int bandwidth[] = {500E3, 500E3, 500E3, 500E3};
int codingRate[] = {5, 5, 5, 5};
long int frequency[] = {915E6, 915E6, 915E6, 915E6};
int spreadingFactor[] = {7, 7, 7, 7};
int txPower[] = {20, 20, 20, 20};

/**
 * Function to set parameters, taking an integer to loop through
 */
String setParameters(int i)
{

  LoRa.setSignalBandwidth(bandwidth[i]);
  LoRa.setCodingRate4(codingRate[i]);
  LoRa.setFrequency(frequency[i]);
  LoRa.setSpreadingFactor(spreadingFactor[i]);
  LoRa.setTxPower(txPower[i]);

  long int bw = bandwidth[i];
  int cr = codingRate[i];
  long int freq = frequency[i];
  int sf = spreadingFactor[i];
  int tx = txPower[i];

  // Storing in csv format to print to log file via logPrint
  logPrint = "";
  logPrint = logPrint +
             bw + "," +
             cr + "," +
             freq + "," +
             sf + "," +
             tx;

  return logPrint;
}