num=int(input("请输入大于0的数：\n"))
List=[]
while num!=0:
    a=num%10
    List.append(a)
    num=int(num/10)
i,j=0,len(List)-1
f=True
while i<=j:
    if List[i]!=List[j]:
        f=False
        break;
    i+=1
    j-=1
if(f):
    print("是回文数")
else:
    print("不是回文数")