class A:
    def show(self):
        print("Hello")
class B:
    def show(self):
        print("World")
for o in (A(),B()):
    o.show()
