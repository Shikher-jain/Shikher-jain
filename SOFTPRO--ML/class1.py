from networkx import center
import numpy as np

# arr01=np.array(["!","@","#",44])
# arr02=np.array(["dd cc bb aa","!","@","#",44])
# arr03=np.array([44,88,33.3,43.5,22,33,44.4,44])
# arr04=np.array([[1,2,3,4],[5,6,7,8]])
# arr05=np.zeros(5)
# arr06=np.zeros(5,int)
# arr07=np.zeros(5,str)
# arr08=np.ones(5)
# arr09=np.ones(5,int)
# arr10=np.ones(5,str)
# arr11=np.arange(1,10,2)
# arr12=np.arange(1,10)
# arr13=np.linspace(1,2,10)
# print(
#    "dimensions shape size stype array\n",
#    "  ",arr01.ndim,"  ",arr01.shape," ",arr01.size," ",arr01.dtype," ",arr01,"\n",
#    "  ",arr02.ndim,"  ",arr02.shape," ",arr02.size," ",arr02.dtype," ",arr02,"\n",
#    "  ",arr03.ndim,"  ",arr03.shape," ",arr03.size," ",arr03.dtype," ",arr03,"\n",
#    "  ",arr04.ndim,"  ",arr04.shape," ",arr04.size," ",arr04.dtype," ",arr04,"\n",
#    "  ",arr05.ndim,"  ",arr05.shape," ",arr05.size," ",arr05.dtype," ",arr05,"\n",
#    "  ",arr06.ndim,"  ",arr06.shape," ",arr06.size," ",arr06.dtype," ",arr06,"\n",
#    "  ",arr07.ndim,"  ",arr07.shape," ",arr07.size," ",arr07.dtype," ",arr07,"\n",
#    "  ",arr08.ndim,"  ",arr08.shape," ",arr08.size," ",arr08.dtype," ",arr08,"\n",
#    "  ",arr09.ndim,"  ",arr09.shape," ",arr09.size," ",arr09.dtype," ",arr09,"\n",
#    "  ",arr10.ndim,"  ",arr10.shape," ",arr10.size," ",arr10.dtype," ",arr10,"\n",
#    "  ",arr11.ndim,"  ",arr11.shape," ",arr11.size," ",arr11.dtype," ",arr11,"\n",
#    "  ",arr12.ndim,"  ",arr12.shape," ",arr12.size," ",arr12.dtype," ",arr12,"\n",
#    "  ",arr13.ndim,"  ",arr13.shape," ",arr13.size," ",arr13.dtype," ",arr13,"\n",
# )
# arr14=np.array([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
# print(arr14)
# arr15=arr14.reshape(2,2,2,2)
# arr16=arr14.reshape(4,4)
# print(arr15.ndim,"- D array :\n",arr15,"\n",
#       arr16.ndim,"- D array :\n",arr16)
# arr17=arr15.flatten()
# arr18=arr16.flatten()
# print(arr17.ndim,"- D array :\n",arr17,"\n",
#       arr18.ndim,"- D array :\n",arr18)

# print("concatenation".upper().center(40))
# print(np.concatenate([np.array([1,2,3,4]),np.array([6,7,8,9,0])]))


# txt="TRIGNOMETRY"
# x=txt.center(40)
# print(x)

# arr19=np.array([1,2,3,4])
# print(
#     f"sin({arr19} ) :\n",
# np.sin(arr19),"\n"
#     f"cos({arr19} ) :\n",
# np.cos(arr19),"\n"
#     f"tan({arr19} ) :\n",
# np.tan(arr19),"\n"
#     f"cosec({arr19})\n :",
# np.arcsin(arr19),"\n"
#     f"sec({arr19} ) :\n",
# np.arccos(arr19),"\n"
#     f"cot({arr19} ) :\n",
# np.arctan(arr19),"\n"
#     f"sum({arr19} ) :\n",
# np.sum(arr19),"\n"
#     f"sqrt({arr19} ) :\n",
# np.sqrt(arr19),"\n"
#     f"log({arr19} ) :\n",
# np.log(arr19),"\n"
#     f"max({arr19} ) :\n",
# np.max(arr19),"\n"
#     f"min({arr19} ) :\n",
# np.min(arr19),"\n"
# )
# print(arr19.dtype)

# arr20=np.array([[1,2,3],[4,5,6],[7,8,9]])
# arr21=np.array([[9,8,7],[6,5,4],[3,2,1]])

# print(arr20)
# print("\n",np.sum(arr20))
# print("\n",arr20.sum(axis=0))
# print("\n",arr20.sum(axis=1))

# print(arr21)
# print("\n",np.sum(arr21))
# print("\n",arr21.sum(axis=0))
# print("\n",arr21.sum(axis=1))

# print("\n",np.hstack((arr20,arr21)))
# print("\n",np.hstack((arr20,arr20)))
# print("\n",np.vstack((arr20)))
# print("\n",np.vstack((arr20,arr21)))

arr22=np.array([[11,22,33,44],[12,23,34,45],[13,24,34,46]])
print("\n",arr22)
print("\n",arr22.ravel())
print("\n",arr22)
