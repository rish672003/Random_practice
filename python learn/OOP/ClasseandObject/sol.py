class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(f'Name: {self.name}, Age: {self.age}')

student1 = Student('Alice', 20)
student1.setdetails('Alice', 25)
print(student1.name, student1.age)