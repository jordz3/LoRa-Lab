# CITS5506 LoRa Lab

## Concepts and Preparation
In this lab you will design and run experiments to explore the effects of LoRa parameters on link quality. You will build on experience from this week's lecture and previous labs and applying the knowledge in a practical environment.

Before the lab you should review the lecture material and papers on LoRa.

## Lab Tasks
1. Install the Github Repository as stated in the [README.md](/README.md).

2. Set up TTGO sender-receiver pair following the provided instructions. Set up a wireless channel link by separating your sender and receiver nodes and collect the data from one round of the default experimental settings.  Each TTGO T Beam should be paired with a Laptop/Computer via USB cable for ease of changing of parameters. Please read the other [README.md](/Log_Files/README.md) for logging instructions.

3. Record the PacketRSSI, RSSI and SNR, along with the LoRa parameters used and details of the channel for the setting(s) you measure.  Check your results using the provided Jupyter notebook.

4. Decide on some new application settings for LoRa and choose appropriate parameter requirements and expected path loss for channels in your application. LoRa is a long range technology so consider channels outside in the University campus.  Modify the configuration file for the Arduino code to enable you to test several different LoRa parameter settings. Remember that if you use different Spreading Factors, and a reasonably low data rate, then different groups should not interfere, so you can use the central channel frequency.  Since there are many unknowns about your channels you should investigate a range of parameters. Change the configuration files and run new experiments.

5. Note which variables that can be changed on the fly i.e you can cycle through automatically and those that you can not, as specified in [my_library.cpp](/My_Library/my_library.cpp)

6. Using the provided Jupyter notebook as a template, write a short lab report on the results of your experiments.  Add comments to the notebook to:

    Describe your sensor network set up: the equipment used and your node positions.
    Describe your channel and the LoRa setting(s) you experimented with.
    Describe the RSSI and SNR values you observed. How much did these values vary? What do your results tell you about the communication channel.
    Describe any other things that might have affected your experiment results.
    
7. When you have completed your lab report, upload your dataset(s) and jupyter notebook(s) to ms-teams area for this lab.  
