# Inheritance allow us to define a
# class in terms of another
# class, which makes it easier
# to create and maintain an application

class Parent1:
    value1 = "this is value 1"
    value2 = "this is value 2"
class Parent2:
    value1 = "this is value 1"
    value2 = "this is value 2"
    
class Child(Parent1, Parent):  #inherite multiple class
    pass

parent_ = Parent()
#print(parent_.value1)
#print(parent_.value2)

child_ = Child()
print(parent_.value1)
print(child_.value2)
