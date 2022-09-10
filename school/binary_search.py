l=[1,2,3,4,5,6,7,8,9]
n=int(input('enter a no.'))
start,end = 0,len(l)-1
while start<=end:
    m=(start+end)//2
    if l[m]==n:
        print('the value exist at ',m)
        break
    elif l[m]<n:
        start=m+1
    else:
        end=m-1
else:
    print('value doesn’t exist.')
