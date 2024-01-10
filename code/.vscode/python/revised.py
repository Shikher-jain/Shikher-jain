# def avg(a,b):
#     print("The average is:",(a+b)/2)
# avg(5,9)

# def avg01(*num):
#     print(type(num),type(avg01))
#     sum=0
#     for i in num: 
#         sum=sum+i
#     print("The average is:",sum/len(num))
# avg01(1,2,3,4,5,6,7,8,9,10)

# def avg02(**names):
#     print(type(names),"\n",type(avg02))
#     print("yoo", names["abcd"] , names["efgh"] , names["ijkl"])
# avg02(abcd="mnop",efgh="qrst" ,ijkl="uvwx")

# def avg03(a,b):
#     return (a+b)/2
# avg04=avg03(5,9)
# print(avg04)

# list=[i*i for i in range(10)]
# print(list)

# list01=[i*i for i in range(10) if i%2==0]
# print(list01)

# list02=[i*i for i in range(10) if i%2!=0]
# print(list02)

# l =[3,7,1,8,4,2,9,6,5,0]
# print(l)
# l.sort(reverse=True)
# print(l)
# l.sort()
# print(l)
# l.append(11)
# print(l)
# l.remove(4)
# print(l)
# l.pop()
# print(l)
# l.reverse()
# print(l)
# l.reverse()
# print(l.index(2),"index")
# print(l)
# print(l.count(2),"count")
# m=l
# m[0]=4
# print(l)
# print(m)
# m2=l.copy()
# print("use copy function")
# print(l)
# print(m)
# l.insert(1,9)
# print(l)
# l2=[1,2,3,4]
# m3=[9,8,9,7,6]
# l.extend(m)
# print(l)
# l.sort()
# print(l)
# print(l2+m3)
# print("set\n",set(l))

# x=int(input("Enter the value of x : "))
# match x:
#     case 1:
#         print("x is 1")
#     case 2:
#         print("x is 2")
#     case 3:
#         print("x is 3")
#     case 4:
#         print("x is 4")
#     case 5:
#         print("x is 5")
#     case 6:
#         print("x is 6")
#     case 7:
#         print("x is 7")
#     case _ if x!=8:
#         print("x =",x)
#     case _ :
#         print("x =",x)

# tuple01 = (0,1,2,3,4,5,6,7,8,9)
# tuple02 = (0,1,2,3,4,5,6,7,8,9)
# x=list(tuple01)
# t01=tuple01
# t02=tuple02
# t03=t01+t02
# print(x)
# print(tuple01)
# print(tuple02)
# print(t03)
# print("'count is'",t03.count(0))
# print("'index is'",t03.index(0))
# print("'index b/w 8 & 13 is'",t03.index(0,8,13))#  kya , kaha se , kaha tak
# print("'count is'",t03.count(0))

# print("String Formatting old")
# let01="my name is {} and I'm from {}"
# let02="my name is {} and I'm from {}"
# let03="my name is {0} and I'm from {1}"
# name="Shikher"
# city="Agra"
# print("let01.format(name,city)",let01.format(name,city))
# print("let02.format(city,name)",let02.format(city,name))
# print("let03.format(name{0},city{1})",let03.format(name,city))

# print("String Formatting new by using 'f' string print(f"'""'")" )
# print(f"my name is {name} and I'm from {city}")
# print(f"my name is {{name}} and I'm from {{city}}")
# rate=78.0787
# print(f"rate is {rate:.2f}")

print("Docstring")
def sq(n):
    '''This is Docstring in Python'''
    print(n**2)
sq(4)
print(sq.__doc__)
print('''>>> import this 
The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!''')