class animal:
    def speak(self):
        print("Animal speaks")

class dog(animal):
    def bark(self):
        print("Dog barks")

dog1=dog()
dog1.speak()
dog1.bark()