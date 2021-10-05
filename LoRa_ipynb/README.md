# Jupyter Notebook Analysis

## Jupyter Notebook

1. After completing the [Lab Tasks](/MPE-LoRa/Lab_Tasks/README.md), open an instance of `Jupyter Notebook`

2. Navigate to the directory below:
```
C:\Users\<YOUR_USERNAME>\Documents\Arduino\MPE LoRa\LoRa_ipynb
```
3. Open the `LoRa-Analysis.ipynb` Python Notebook.

4. Edit cell 3 to read the .csv file with your data.
```
df = pd.read_csv ('~\Documents\Arduino\MPE LoRa\Log_Files\<YOUR_CSV_FILE>',sep=',')
```

5. Run the remaining notebook making changes to the graphs as needed.

## Google Colab

1. Go to https://research.google.com/colaboratory/

2. Select `Upload` -> `Choose File`

3. Navigate to the directory of your notebook
```
~\LoRa-ipynb\LoRa-Analysis.ipynb
```

4. Select the Folder icon on the left side-bar

5. Select `Mount Drive`

6. Run the Cell that was added in the notebook and follow the steps to get your authorisation code.

7. Copy the code into the cell provided in the notebook and press enter.
```
Enter your authorization code:
```

8. Upload your .csv to your Google Drive

8. *(Alternative)* Select `drive`. 

    Hover over `MyDrive` and Select the `Three Dots in a Column`.

    Select `Upload` and upload the .csv you want to proceed with.

9. Select `MyDrive` and locate the .csv and hover over it and Select the `Three Dots in a Column`

    Select `Copy Path`

10. Edit cell 4 to read the .csv file with your data. This should look similar to
```
df = pd.read_csv ('/content/drive/MyDrive/Test.csv',sep=',')
```
11. Run the remaining notebook making changes to the graphs as needed.