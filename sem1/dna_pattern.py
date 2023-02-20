r = int(input())
x = int(r/2)
for i in range(0,x):
    print(' '*i + '* '*(x-i))
for i in range(1,x+1):
    print(' '*(x-i) + '* '*i)