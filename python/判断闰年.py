def Leap_year(year):
    if year%400==0 or (year%4==0 and year%100!=0):
        print(year,"年是闰年")
    else:
        print(year,"年不是闰年")

year=int(input("请输入年份："))
Leap_year(year)