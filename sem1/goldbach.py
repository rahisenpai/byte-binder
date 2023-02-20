def prime(x):
    for i in range(2,x):
        if x%i == 0:
            return False
    return True
n = int(input('enter: '))
arr = []
for j in range(2,n+1):
    a = prime(j)
    if a:
        arr.append(j)
lt = len(arr)
print(arr)
xyz = 0
for k in arr:
    if xyz == 1:
        break
    for m in range(-1,-lt-1,-1):
        if k+arr[m] == n:
            print(k, arr [m])
            xyz =1
            break