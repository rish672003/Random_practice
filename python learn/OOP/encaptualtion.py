## a data that is hidden from the user
## only the class methods can access it and modify it
## it is done to prevent the data from being modified by mistake]

class BankAccount: 
    def __init__(self,account_number, balance):
        self.acccount_number=account_number
        self.__balance=balance  #private attribute


    def deposit(self,amount):
        self.__balance+=amount
        print(f"Deposited {amount}. New balance is {self.__balance}")
    
    def get_balance(self):
        return self.__balance ##control accrss
    

account = BankAccount("123456", 1000)
print(account.get_balance())  # Accessing balance through a method