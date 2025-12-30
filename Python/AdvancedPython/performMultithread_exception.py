import threading
def task(n):
    try:
        print(10/n)
    except Exception as e:
        print("Error",e)
t1=threading.Thread(target=task,args=(2,))
t2=threading.Thread(target=task,args=(0,))
t1.start()
t2.start()
t1.join()
t2.join()
print("Done")
