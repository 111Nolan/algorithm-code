#input的返回值是str不能用于运算
number1 = int(input("输入第一个数字\n"))
number2 = int(input("请输入第二个数字\n"))
m = max(number1,number2)
n = max(number1,number2)
r = (number1)%(number2)
while r!=0:
    m=n
    n=r
    r=m%n
print(number1,"和",number2,"的最大公约数为：",n)
# print("he")