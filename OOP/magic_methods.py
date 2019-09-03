# In this example we will see what are Python Magic Methods (or Special Methods) and how to overload them
# Now why these methods are called Magic or Special methods anyway? The reason is that these
# methods are invoked directly after creation of a class instance. For example:
# __init__ is a Magic method. Also __str__, __repr__, __add__ are all magic methods.


class Employee(object):
    def __init__(self, firstname, lastname, salary=0):
        self.firstname = firstname
        self.lastname = lastname
        self.salary = salary

    def __str__(self):
        return 'Full Name: ' + self.firstname + ' ' + self.lastname

    # For overloading the (+)
    def __add__(self, other):
        return self.salary + other.salary

    # For overloadig the (*)
    def __mul__(self, other):
        return self.salary * other.salary


Anil = Employee('Anil', 'Kapoor', 1)
Anuj = Employee('Anuj', 'Kapoor', 2)
print(Anil)
print(Anuj)
print(Anil + Anuj)
print(Anil * Anuj)
