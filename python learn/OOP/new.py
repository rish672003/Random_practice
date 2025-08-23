class Character: 
    def __init__(self, name, health, attack):
        self.name = name
        self.health = health
        self.attack = attack

    def attack_enemy(self):
        print(f'{self.name} attack with power {self.attacj}')

worrier = Character("Thor", 100, 50)
mage = Character("Merlin", 80, 90)
archer = Character("Robin", 70, 60)

worrier.attack_enemy()
mage.attack_enemy() 
archer.attack_enemy()


"""

1- class and objects
2- inherit
3- polymorphism
4- encapsulation

"""