def factorial():
    n=int(input('enter a number - '))
    a=1
    for i in range(1,n+1):
        a*=i
    print(a)

def table():
    n=int(input('enter a number - '))
    for i in range(1,11):
        print(n*i)

def squares_n():
    n=int(input('enter a number - '))
    for i in range(1,n+1):
        print(i*i)

def sum_n():
    n=int(input('enter a number - '))
    p=0
    for i in range(1,n+1):
        p+=i
    print(p)
def sum():
    n=int(input('enter a number - '))
    s=0
    while(n!=0):
        r=n%10
        s+=r
        n=n//10
    print(s)

def reverse():
    n=int(input('enter a number - '))
    s=o
    while(n!=0):
        r=n%10
        s=s*10+r
        n=n//10
    print(s)

    
def xn():
    x=int(input('enter a no. - '))
    n=int(input('enter exponent - '))
    p=1
    for i in range(1,n+1):
        p=x*p
    print(p)

def sum_xn():
    x=int(input('enter base - '))
    n=int(input('enter exponent - '))
    s=0
    for i in range(1,n+1):
        p=1
        for j in range(i):
            p=p*x
        s=s+p
    print(s)

def lcm():
    a=int(input('enter no. - '))
    b=int(input('enter no. - '))
    ctr=1
    while(1):
        s=a*ctr
        if(s%b==0):
            print('lcm - ',s)
            break
        else:
            ctr+=1

def hcf():
    a=int(input('enter no. - '))
    b=int(input('enter no. - '))
    if b>a:
        a,b=b,a
    while(1):
        r=a%b
        if(r!=0):
            a,b=b,r
        else:
            print('hcf - ',b)
            break

def arm():
    x=int(input('enter a no. -'))
    s=0
    n=x
    while(x!=0):
        r=x%10
        s=s+r**3
        x=x//10
    if(s==n):
        print('its a armstrong number')
    else:
        print('its not an armstrong number')


        
    
        
        

print("          Menu          ")
while True:
    print(" 1.  Factorial  ")
    print(" 2.  Table  ")
    print(" 3.  Squares till n  ")
    print(" 4.  Sum till n  ")
    print(" 5.  Sum of the numbers  ")
    print(" 6.  Reverse the number  ")
    print(' 7.  x**n ')
    print(' 8.  sum till x**n ')
    print(' 9.  lcm ')
    print('10.  hcf ')
    print('11.  check armstrong number')
    ch=int(input("enter your choice- "))
    if ch==1:
        factorial()
    elif ch==2:
        tabe()
    elif ch==3:
        squares_n()
    elif ch==4:
        sum_n()
    elif ch==5:
        sum()
    elif ch==6:
        reverse()
    elif ch==7:
        x**n()
    elif ch==8:
        sum_x**n()
    elif ch==9:
        lcm()
    elif ch==10:
        hcf()
    elif ch==11:
        arm()
    else :
        break
    print()
        
    

        
    
