def fun(y,b):
    res=0
    count=0
    for i in range(-1,-len(y)-1,-1):
        if y[i]>='A' and y[i]<='Z':
            res+=int((ord(y[i])-55))*b**count
        else:
            res+=int(y[i])*b**count
        count+=1
    print(res)

x=input()
if x[2]>='0' and x[2]<='9':
    ab = x.find('num')
    y=x[ab+3:]
    b=int(x[2:ab])
    fun(y,b)
elif x[2:5]=='dec':
    print(x[5:])
else:
    y=x[5:]
    z=x[2:5]
    if z == 'bin':
        b=2
    elif z == 'oct':
        b=8
    elif z == 'hex':
        b=16
    fun(y,b)