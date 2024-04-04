class Myclass:
    def __init__(self,value):
        self._value=value

    def show(self):
        print(f"Value = {self._value}")
    @property
    def value(self):
        return self._value

    @property
    def mul10(self):
        return 10* self._value
    
    @value.setter
    def value(self,nvalue):
        self._value=nvalue

    @mul10.setter
    def mul10(self,nvalue):
        self._value=nvalue/10
    
obj = Myclass(7)
obj.mul10=6
obj.value=9
print(obj.mul10)
print(obj.value)
obj.show()