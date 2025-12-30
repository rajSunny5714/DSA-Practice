import threading
def f1():
    print("A")
def f2():
    print("B")
t1=threading.Thread(target=f1)
t2=threading.Thread(target=f2)
t1.start()
t2.start()
