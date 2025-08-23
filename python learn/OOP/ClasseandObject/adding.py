class car: 
    def set_details(self, model, color, year): 
        self.model = model
        self.color = color
        self.year = year
    def show_details(self): 
        print(f'Model is {self.model} ')
        print(f'Color is {self.color} ')
        print(f'Year is {self.year} ')


car1 = car()
car1.set_details("BMW", "Black", 2020)

car2 = car()
car2.set_details("Audi", "White", 2021)


car1.show_details()
car2.show_details()