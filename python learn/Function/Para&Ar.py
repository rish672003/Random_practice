def greet(name): # name is a parameter here
    """Docstring for function greet"""
    print("hello")


greet("Rishabh") # rishabh is a argument here


#postional argument

def greet(name, city):
    """Docstring for function greet"""
    print("hello")


greet("Rishah", "delhi")
#keyword argument
def greet(name ,ctiy):
    """Docstring for function greet"""
    print("hello")


greet(name = 'Rishabh', city = "delhi")

#default argument
#agar kuch bhi nahi aaya to default vulue aa jeyegii

def greet(name = "user", city = "noida"):
    """Docstring for function greet"""
    print("hello")


greet(name="", city = "")