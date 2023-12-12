import calendar
# year=2023
# month=12
# print(calendar.month(year,month))
print(calendar.month(2023,10))
yy=int(input("Enter year  "))
mm=int(input("Enter month  "))
print(calendar.month(yy,mm))
for i in range(1,12):
    print(calendar.month(yy,i))