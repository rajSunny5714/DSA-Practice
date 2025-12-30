class Node:
    def __init__(self,d):
        self.d=d
        self.n=None
a=Node(1)
b=Node(2)
a.n=b
print(a.d,a.n.d)
