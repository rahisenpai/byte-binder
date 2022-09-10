def sum1(x,n):
    s=0
    for i in range(1,n+1):
        a,c=1,1
        for j in range(i):
            a=a*x
            for k in range(1,i+1):
                c=c*k
                s=s+(a/c)
    return(s)

x=int(input('enter base -'))
n=int(input('enter a power -'))
a=sum1(x,n)
print(a)

