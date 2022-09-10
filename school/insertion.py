l=[2,4,8,9,5,7,3,0]
#  0 1 2 3 4 5 6 7       
print(l,'\n')

for i in range(1,8):
    a=l[i]
    j=i-1
    while j>-1 and l[j]>a:
        l[j+1]=l[j]
        j-=1
    l[j+1]=a
    print(l)
    
