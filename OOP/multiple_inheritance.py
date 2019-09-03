# This program shows the order in which the classes are accessed in case of multiple inheritance
# Python uses DEPTH FIRST SEARCH algorithm for lookups


class A(object):
    def doThis(self):
        print('Doing this in A')


class B(A):
    pass


class C(A):
    def doThis(self):
        print('Doing this in C')


class D(B, C):
    pass


dObj = D()
dObj.doThis()
print(D.mro())
