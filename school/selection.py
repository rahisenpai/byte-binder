l=[9,6,8,3,1,5]
#  0 1 2 3 4 5
print(l,'\n')
for i in range (6):
    a=l[i]
    b=i
    for j in range(i+1,6):
        if l[j]<a:
            a=l[j]
            b=j
    l[i],l[b]=l[b],l[i]
    print(l)
    
