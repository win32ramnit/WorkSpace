class Person:
    def __init__(self, id):
        self.id = id
        print("Our class is created!")
    def __del__(self):
        print(self.id,"Our class object is destroyed")
    def setFullName(self, firstName, lastName):
        self.firstName = firstName
        self.lastName = lastName
    def printFullName(self):
        print(self.firstName," ",self.lastName)

personName = Person(5)
personName.setFullName("Programming", "Knowledge")
personName.printFullName()
personName.__del__()
