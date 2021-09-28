# CITS5506 LoRa Lab (Week X)

## Concepts and Preparation
In this lab you will design and analyse experiments to explore the effect of LoRa parameters. You will build on experience from `week X` lecture and applying the knowledge in a practical environment.

Before the lab you should review the lecture material and papers on LoRa from `week X`.

## Lab Tasks
1. Install the Github Repository as stated in the [README.md](/README.md).

2. Decide on an application setting for LoRa and choose appropriate parameter requirements and expected path loss for channels in your application. LoRa is a long range technology so consider channels outside in the University campus.

3. Since there are many unknowns about your channels you should investigate a range of parameters. Use graphs or tables to report your result. Summarise your main findings.

4. What are the main uncertainties behind your estimates and what experimental data could you collect to reduce the uncertainty?

5. Next you will program your LoRa radios to investigate the effect of your preferred LoRa settings in a real-world setting. Make a group of 4 people. Each group will need 2 TTGO T Beam ESP's.

6. Modify the Arduino code to enable you to test several different LoRa parameter settings. Remember that if you use different Spreading Factors, and a reasonably low data rate, then different groups should not interfere, so you can use the central channel frequency.

7. Each TTGO T Beam should be paired with a Laptop/Computer via USB cable for ease of changing of parameters. Please see the [README.md](/LoRa-Lab/Lab_Tasks/README.md) for logging instructions.

8. Record the RSSI and SNR, along with the LoRa parameters used and details of the channel for the setting(s) you measure. 

9. Record all relevant parameters you can think of.

10. Write a short lab report documenting the results of your experiments.

    Describe your sensor network set up: the equipment used and your node positions.
    Describe your channel and the LoRa setting(s) you experimented with.
    Describe the RSSI and SNR values you observed. How much did these values vary? What do your results tell you about the communication channel.
    Describe any other things that might have affected your experiment results. Record as many relevant parameters as you can: for example

11. When you have completed your lab report, upload it to the github repository. Your report should be a single file in pdf format. Labs do not count towards your assessed marks but I will provide formative feedback on your lab reports and will be greatly appreciated. Submissions for the assessed project will be in a similar format.