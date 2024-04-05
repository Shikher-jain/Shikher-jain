# import cv2 
import numpy
# import pandas as pd
import pandas
import sys
print(sys.executable)
# print("Version of cv2:",cv2.__version__)
print("Version of numpy:",numpy.__version__)
data={
    "Studests":["abcd","efgh","ijkl","mnop"],
    "marks":[98,86,85,90],
    "sports":["hockey","cricket","football","baseball"],
    }
df=pandas.DataFrame(data,index = ["type 1","type 2","type 3","type 4"])
print(df)
# display(df)
print(df.index)