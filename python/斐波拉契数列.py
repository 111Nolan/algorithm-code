def CalFibonacci():
    number=int(input("请输入一个大于1的数\n"))
    i,j=0,1
    if number<0:
        print("请重新输入")
    elif number==1 or number==2:
        print(i)
    else:
        while i<number and j<number:
            print(i,end=' ')
            i,j=j,i+j
        print(i)    #输出最后一个
CalFibonacci()
