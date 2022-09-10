l1=[1,2,4,5,6,10,11]
l2=[2,3,4,6,89]
l3=[]

for i in l1:
    if i%2!=0:
        l3.append(i)
for j in l2:
    if j%2!=0:
        l3.append(j)
for m in range(-1,-(len(l2)+1),-1):
    if l2[m]%2==0:
        l3.append(l2[m])
for k in range(-1,-(len(l1)+1),-1):
    if l1[k]%2==0:
        l3.append(l1[k])
    
print(l1)
print(l2)
print(l3)
