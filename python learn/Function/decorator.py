"""
burger - function 
extra cheese - decorator


mainfunction  > function inside function > decorator

without chnging the main function we can add extra functionality using decorator    

"""

def my_decorator(func):
    def wrapper():
        print("I am extra cheese")
        func()
        print("I am done with extra cheese")
    return wrapper


@my_decorator

def say_hello():
    print("Hello!")


say_hello()