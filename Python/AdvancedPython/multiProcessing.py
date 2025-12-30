import multiprocessing
def f():
    print("Run")
p=multiprocessing.Process(target=f)
p.start()
