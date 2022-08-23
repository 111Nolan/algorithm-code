def CalFibonacii(n):
    if n<=0:
        return 0
    elif n==1 or n==2:
        return 1
    else:
        return CalFibonacii(n-2)+CalFibonacii(n-1)

number=int(input("请输入一个大于1的数：\n"))
List=[]
for i in range(number):
    List.append(CalFibonacii(i))    #列表末尾添加新对象
    if List[i]>number:
        break;
for i in range(len(List)):
    print(List[i],end=" ")