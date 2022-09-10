def bubbleSort(arr): 
    n = len(arr)  
    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j]
        print(arr)
l=[9,3,4,2,6,7,1,0]
print(l,'\n')
bubbleSort(l)
