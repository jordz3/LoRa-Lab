#include "my_library.h"

String logPrint; // variable to record logging data
int NUM_PARAMETERS = 3; // number of unique parameters passed
int NUM_PACKETS = 50; // number of packets to send
int dly = 1000; // delay for transmission rate (ms)

/** 
 * Storing of parameters to cycle through
 * NOTE
 * From my testing, Spreading Factor must remain the same across the experiment and cannot be cycled.
 * Please see https://github.com/sandeepmistry/arduino-LoRa/blob/master/API.md for values each parameter can take.
 */

// Storing parameters to test
//Supported values are 7.8E3, 10.4E3, 15.6E3, 20.8E3, 31.25E3, 41.7E3, 62.5E3, 125E3, 250E3, and 500E3.
long int bandwidth[] = {250E3, 250E3, 250E3}; 

//Supported values are between 5 and 8, these correspond to coding rates of 4/5 and 4/8. The coding rate numerator is fixed at 4.
int codingRate[] = {5, 5, 5, 5, 5, 5, 5, 5, 5};

//frequency - frequency in Hz (433E6, 868E6, 915E6)
long int frequency[] = {915E6, 915E6, 915E6, 915E6, 915E6, 915E6, 915E6, 915E6, 915E6};

//Supported values are between 6 and 12. If a spreading factor of 6 is set, implicit header mode must be used to transmit and receive packets.
int spreadingFactor[] = {7, 7, 7, 7, 7, 7, 7, 7, 7};

//Supported values are 2 to 20 for PA_OUTPUT_PA_BOOST_PIN, and 0 to 14 for PA_OUTPUT_RFO_PIN.
int txPower[] = {10, 12, 14, 8, 10, 12, 14, 10, 12, 14};

//Minimize bandwidth and maximize spreading factor to boost link budget. Maximize coding rate to boost reliability.

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

  // Storing in csv to print to log file
  logPrint = "";
  logPrint = logPrint +
             bw + "," +
             cr + "," +
             freq + "," +
             sf + "," +
             tx;

  return logPrint;
}