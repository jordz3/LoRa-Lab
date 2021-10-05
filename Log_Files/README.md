# Logging experimental data

We will be using [PuTTY](https://www.putty.org/) to log the data via the COM port on the `Receiver` TTGO T Beam. Please note, the data collected might have values that need to be cleaned, adjusted or deleted prior to loading into Jupyter Notebooks. Additionally, the first 15 lines for debugging will also need to be deleted. The first line in the file should start with:

Time,Number,S_lat,S_Long,Bandwidth,CodingRate,Frequency,SpreadingFactor,TxPower,PacketRSSI,RSSI,SNR,R_Lat,R_Long

1. If the `Receiver` device is not connected, connect the device and find the COM port via `Windows Device Manager` or `Arduino IDE`

2. Open the PuTTY Client

2. Choose the `Session` -> `Logging` category on the sidebar.

3. Under `Session Logging`, select `All session output`.

4. Under `Log file name`, set it as follows:
```
C:\Users\<YOUR_USERNAME\Documents\Arduino\MPE LoRa\Log_Files\&Y-&M-&D_&T_<EXPERIMENT_NAME>.csv
```
5. Choose the `Session` category on the sidebar.

6. Under `Connection type:`, select `Serial`

7. Under `Serial line`, type `<YOUR_DEVICE_COM_PORT>`

8. Under `Speed`, type `115200`

9. Under `Saved Sessions`, type `Receiver-TTGO` and click `Save`

    This allows you to preload the saved configurations for further experiments

10. When ready to record data, click `Open`
    NOTE: Click `Open` just after the Receiver status indicates `Done Uploading`

# Alternative Method

If using PuTTY or other terminal programs is not preferred, use this method to record the `Receiver` TTGO T Beam instead.

1. In the Arduino IDE, Select `Tools` in the menu bar at the top.

2. Select `Port` and select `<YOUR_DEVICE_COM_PORT>`

3. Select `Serial Monitor`, to open the Serial Monitor.

4. Once an experiment is complete, copy the contents of the Serial Monitor into a a new Notepad file. Save the file name with the extension .csv.