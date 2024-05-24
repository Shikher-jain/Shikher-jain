import random
scoreC=0
scoreU=0

n=int(input("How many times you want to play:"))
while(n):
    user=input("\nEnter : \nR for ROCK \nP for PAPER \nS for SCISSORRS \n=>")
    if (user=="R" or user=="r"):
        user= -1
    if (user=="P" or user=="p"):
        user= 0
    if (user=="S" or user=="s"):
        user= 1
    else:
        print("Invalid Alphabhets!! ")

    comp = random.randint(-1,1)
    if(comp==user):
        print("DRAW")

    if(user==-1):#ROCK
        if(comp==0):#PAPER
            print("YOU LOSE")
            scoreC=scoreC+1
        if(comp==1):#SCISSOR
            print("YOU WIN")
            scoreU=scoreU+1

    if(user==0):#PAPER
        if(comp==-1):#ROCK
            print("YOU WIN")
            scoreU=scoreU+1
        if(comp==1):#SCISSOR
            print("YOU LOSE")
            scoreC=scoreC+1

    if(user==1):#SCISSOR
        if(comp==-1):#ROCK
            print("YOU LOSE")
            scoreC=scoreC+1
        if(comp==0):#PAPER
            print("YOU WIN")
            scoreU=scoreU+1
    n=n-1