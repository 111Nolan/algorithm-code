List = [33,11,66,99,55]
# List1= [0 for i in range(4)]
Max =List[0]
print(Max)#print默认end为\n
for i in List:
    if i > Max:
        Max = i
print("最大值为",Max)