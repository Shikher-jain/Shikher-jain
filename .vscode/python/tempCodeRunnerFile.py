text="a c d e f g h i j k l m n o p q  s t u v w x y z"
f=open("text.txt","w")
f.write(text)
f.close
f=open("text.txt","r")
print(f.read)
f.close