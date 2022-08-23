#def 函数
def bubbleSort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]

arr =[22,11,88,66,55,44,77,99,44,33]
bubbleSort(arr)

print("冒泡排序后的数组为：")
for i in range(len(arr)):
    print("%d"%arr[i],end=' ')
