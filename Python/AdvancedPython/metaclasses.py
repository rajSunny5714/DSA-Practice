class Meta(type):
    def __new__(c,n,b,d):
        d["x"]=10
        return super().__new__(c,n,b,d)
class A(metaclass=Meta):
    pass
print(A.x)
