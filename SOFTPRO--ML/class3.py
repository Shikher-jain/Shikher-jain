import pandas as pd
# data={
#     "name":["shikher","sonu","sj"],
#     "surname":["09","jain","75"],
#     "age":[19,20,18]
# }
# df1=pd.Series(data)
# print(df1)

# se1=pd.Series([12,13,14,15])
# se2=pd.Series([12,13,14,15],index=[1,2,3,4])
# print(se1)
# print(se2)
# print(se1+se2)

# list1=[[1,2,3],[5,6,7],[4,8,9]]
# ldf1=pd.DataFrame(list1,index = ["type 1","type 2","type 3"])
# print(ldf1)

# data3={
#     "name":["SHIKHER","sonu","sj"],
#     "surname":["009","jain","75"],
#     "age":[119,220,118],
#     "sample":[0,7,4]
# }
# data1={
#     "name":["shikher","sonu","sj"],
#     "surname":["09","jain","75"],
#     "age":[19,20,18],
#     "sample":[0,7,4]
# }
# df1=pd.DataFrame(data1,index = ["type 1","type 2","type 3"])
# df3=pd.DataFrame(data3,index = ["type 1","type 2","type 3"])
# print(df1["sample"])
# print(df1)
# print(df3)
# df1["sample_age"]=df1["sample"]+df1["age"]
# print(df1)
# df1["check"]= df1["age"] > 18
# print(df1)
# mer=pd.merge(df1,df3,on="sample")
# print(mer)
# (df1)
# data2={
#     "name":["shikher","sonu","sj"],
#     "surname":["09","jain","75"],
#     "age":[19,20,18]
# }
# df2=pd.Panel(data2,index = ["type 1","type 2","type 3"])
# print(df2)

# data4={"A":[1,2,3,4,],"B":[5,6,7,8]}
# df=pd.DataFrame(data4,index=["T-1","T-2","T-3","T-4",])
# print(df)

# df["A+B"]=df["A"]+df["B"] #add two data and add it 
# print(df)
# df["slice1"]=df["A"][:2]  #use slice to use only desired data
# print(df)
# df.insert(1,"PY",df["A+B"]) #insert new data column i.e. "PY"
# print(df)
# df4=df.pop("slice1")
# print(df4) #data which is popped i.e. "slice"
# print(df) #data after pop the slice"
# del df["PY"]
# print(df)