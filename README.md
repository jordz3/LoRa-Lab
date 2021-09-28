# MPE-LoRa
A UWA Master's of Professional Engineering (MPE) Thesis Project.

A LoRa toolkit for creating and recreating experiments with simple configuration.

To setup a LoRa parameter configuration to test, edit the `my_library.cpp` file as needed. 

## Prerequisites

### Arduino IDE
Download the Arduino IDE software via:

https://www.arduino.cc/en/software

### Jupyter Notebook
This will be used for analysis after experiments have been conducted.

If you have a local deployment of Jupyter Notebook, skip this step.

Navigate to: https://jupyter.org/try and select `Try Classic Notebook`

**Creating a new Python 3 Notebook**

`File` -> `New Notebook` -> `Python 3`

## Setting up Arduino Environment

1. Follow the "Installing ESP32 Add-on in Arduino IDE" steps.

https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/
<!--
2. Installing the LoRa Library via Arduino IDE Library Manager

   i. Choose `Sketch` -> `Include Library` -> `Manage Libraries...`

   ii. Type `LoRa` into the search box.

   iii. Click the row to select the library.

   iv. Click the `Install` button to install the library.
-->

2. Clone the following libraries to the Arduino `libraries` folder.
```
cd C:\Users\<YOUR_USERNAME>\Documents\Arduino\libraries

git clone https://github.com/sandeepmistry/arduino-LoRa.git

git clone https://github.com/mikalhart/TinyGPSPlus.git

git clone https://github.com/lewisxhe/AXP202X_Library.git
```

2. *(Optional)* If unable to do step 2, unzip files to directory.

   https://github.com/sandeepmistry/arduino-LoRa

   https://github.com/mikalhart/TinyGPSPlus

   https://github.com/lewisxhe/AXP202X_Library

   Choose green the `Code` dropdown -> `Download ZIP`

   Extract the root folder to the Arduino `libraries` folder.
```
C:\Users\<YOUR_USERNAME>\Documents\Arduino\libraries
```

## Installation of Repository

1. Clone the repository to your desired location
   **NOTE: For the purposes of this GitHub we will be installing to the `Arduino` folder.**
```
cd C:\Users\<YOUR_USERNAME>\Documents\Arduino

git clone git@github.com:jordz3/MPE-LoRa.git
```
2. Copy the my_library folder to the Arduino `libraries` folder.
```
C:\Users\<YOUR_USERNAME>\Documents\Arduino\libraries
```

## Uploading Code to TTGO T Beams

1. Open the location of `My_Library`.
```
C:\Users\<YOUR_USERNAME>\Documents\Arduino\libraries\My_Library
``` 
2. Open the `my_library.cpp` file in your editor of choice.

3. Edit the paramaters in the file to suit your experiment needs.

4. Save the file.

5. Navigate to the LoRa_Tool folder
```
~\MPE LoRa\LoRa_Tool
```
6. Navigate to the `Receiver` folder and open `Receiver.ino` with the Arduino IDE.
```
~\MPE LoRa\LoRa_Tool\Receiver\Receiver.ino
```
7. Select `Tools` from the toolbar the top.

   Choose `Board` -> `ESP32` -> `TTGO T1`

   Choose `Port` -> `<YOUR_DEVICE_COM_PORT>`

8. Click the `Verify` button.

9. Click the `Compile` button.

10. Repeat "Steps 2 to Steps 6 with `Sender` and `Sender.ino`
