#include "my_library.h"

String logPrint; //
int NUM_PARAMETERS = 4; // number of unique parameters passed
int NUM_PACKETS = 20; // number of packets to send
int dly = 2000; // delay for transmission rate (ms)

// Storing parameters to test
long int bandwidth[] = {500E3, 500E3, 500E3, 500E3};
int codingRate[] = {5, 5, 5, 5};
long int frequency[] = {915E6, 915E6, 915E6, 915E6};
int spreadingFactor[] = {7, 7, 7, 7};
int txPower[] = {20, 20, 20, 20};

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