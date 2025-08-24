"""
_init__() method in Python is a special method that is called when an object is instantiated from a class. It is commonly used to initialize the attributes of the object.
"""

class car:
    def set_details(self, name, model, color):
        self.name = name
        self.model = model
        self.color = color

#creating (objects
car1 = car()
car1.set_details("BMW", "X5", "Black")


print(car1.name)
print(car1.model)





##with constructor

class cars: 
    def __init__(self, name, model, color):
        self.name = name
        self.model = model
        self.color = color


car1 = car('Tesla' , 'Model S', 'Red')
print(car1.name)
print(car1.model)


"""
Syntax
class ClassName:
    def __init__(self, parameters):
        # initialization code
__init__ method body




"""