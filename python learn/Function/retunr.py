#jab bhi ek return laagte hai kissi bhi function the iteration of the function are end 

def get_full_name(first_name, last_name):
    """Return a full name, neatly formatted."""
    full_name = first_name + " " + last_name
    return full_name.title()


name  = get_full_name("rishabh", "sharma")
print(name)