##abstraction -> means hiding the unnecessary details from the user.
## only the essential details are shown to the user
## it is done to reduce complexity and increase efficiency
## it is achieved using abstract classes and interfaces

from abc import ABC, abstractmethod
class Vehicle(ABC):
    @abstractmethod
    def start_engine(self):
        pass


class Car(Vehicle):
    def start_engine(self):
        print("Car engine started")

class Bike(Vehicle):
    def start_engine(self):
        print("Bike engine started")


car1 = Car()
car1.start_engine() 
bike = Bike()
car1.start_engine()
bike.start_engine()