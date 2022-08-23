print("水仙花数如下：")
for i in range(100,999):
    #py语言特性是会变成精度最高的double
    a,b,c=i%10,int(i/10%10),int(i/100)
    if(pow(a,3)+pow(b,3)+pow(c,3)==i):
        print(i,end=' ')