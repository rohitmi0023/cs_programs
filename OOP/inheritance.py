# Python looks up for method in following order: Instance attributes, class attributes and the
# from the base class


class Data(object):
    def getData(self):
        print('In data')


class Time(Data):
    def getTime(self):
        print('In time')


data = Data()
time = Time()

data.getData()
time.getTime()
time.getData()  # Inherited
