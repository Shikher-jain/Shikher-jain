class Employee:
    def __init__(self,name,id):
        self.name=name
        self.id=id

    def show(self):
        print(f"Name of Employee  {self.id} is {self.name}")

# Programmer USE Employee FUNCTION                              #Single inheritance
class Programmer(Employee):                                     #Multiple inheritance
    def showLang(self):                                         #Multilevel inheritance
        print("PYTHON")                                         #Hierarchical inheritance
        print("OOPS")                                           #Hybrid inheritance

class Freshers(Programmer):
    def ShowFresher(self):
        print("THIS CLASS FOR FRESHERS ONLY !!!")

e1=Employee("Shikher Jain",75)
e1.show()
e2=Employee("Sonu Jain",9)
e2.show()
e3=Employee("Shikher ",89)
e3.show()
e4=Programmer("SJ",2004)
e4.showLang()
e5=Freshers("FRESHERS",1234)
e5.showLang()
e5.show()
e5.ShowFresher()