# In this example we will be seeing how instance Attributes are used
# Instance attributes are accessed by: object.attribute
# Attributes are looked First in the instance and THEN in the class

import random


class myFirstClass():
    def type(self):
        self.randomValue = random.randint(1, 5)


myFirstObject = myFirstClass()
myFirstObject.type()  # calling the class method / a function
print(myFirstObject.randomValue)  # calling the instance attribute
