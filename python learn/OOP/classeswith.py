#polymorshism with classes 

class bird:
    def sound(self):
        return "chirp chirp"
class dog:
    def sound(self):
        return "bark bark"
    
class parrot:
    def sound(self,animal):
        return animal.sound()


bird1=bird()
dog1=dog()
parrot1=parrot()
print(parrot1.sound(bird1))
print(parrot1.sound(dog1))  
