import os
import sys
print(os.path,sys.executable)
if(not os.path.exists("os MOdule")):
    os.mkdir("os MOdule")

for i in range(1,101):
    os.mkdir(f"os MOdule/dayAS {i}")
    # os.rename(f"os MOdule/day {i}",f"os MOdule/remane {i}")