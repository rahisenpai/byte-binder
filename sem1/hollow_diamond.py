n = int(input('enter: '))  

#1st loop  
for i in range(1,n+1):
    #stars decrease
    for j in range(0, n-i+1):
        print('*',end='')
    #space increase
    for j in range(1, i):
        print(' ',end='')
    #space increase
    for j in range(1, i):
        print(' ',end='')
    #stars decrease
    for j in range(0, n-i+1):
        print('*',end='')
    print()

#2nd loop
for i in range(1,n+1):
    for j in range(1, i+1):
        print('*',end='')
    for j in range(1, n-i+1):
        print(' ',end='')
    for j in range(1, n-i+1):
        print(' ',end='')
    for j in range(1,i+1):
        print('*',end='')
    print()