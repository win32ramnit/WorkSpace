a = 1
s = 0
print('Enter Numbers to add the sum.')
print('Enter 0 to quit.')
while a != 0:
    print('Current Sum: ', s)
    a = float(input('Number? '))
    a = float(a)
    s += a
print('Total Sum = ', s)    
