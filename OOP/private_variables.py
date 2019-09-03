class Person(object):
    def __init__(self, name):
        self.name = name
        self.__education = 'Engineering'  # Private Variable

    def displayInfo(self):
        name = self.name
        education = self.__education  # Can only be accessed within the class
        print('My name is ', name, ' and I am currently doing ', education)


myObj = Person('Rohit')
myObj.displayInfo()
print(myObj.name)
# print(myObj.__education) Throws an error
