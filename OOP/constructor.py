
class myFirstClass():
    def __init__(self):
        print('Calling init')
        self.val = 0
        self.cost = 1000

    def incrementalValue(self):
        self.val += 1


myFirstObject = myFirstClass()
print('First obj value: ', myFirstObject.val)
myFirstObject.incrementalValue()
myFirstObject.incrementalValue()
print('First object after incrementing: ', myFirstObject.val)
