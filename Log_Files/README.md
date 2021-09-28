# Logging experimental data

We will be using [PuTTY](https://www.putty.org/) to log the data via the COM port on the `Receiver` TTGO T Beam.

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