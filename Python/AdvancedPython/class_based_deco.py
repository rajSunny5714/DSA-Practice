class Deco:
    def __init__(self,f):
        self.f=f
    def __call__(self):
        print("Before")
        self.f()
@Deco
def show():
    print("Hello")
show()
