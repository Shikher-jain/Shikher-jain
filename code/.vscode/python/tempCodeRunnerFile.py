def idk(i):
    try:
        l=['f','i','l','l','y','n','a']
        print(l)
        print(l[i])
        return 'try'
    except:
        print("Error")
        return 'except'
    finally:
        print("Always executed")
i=int(input("Enter index: "))
z=idk(i)
print(z)

