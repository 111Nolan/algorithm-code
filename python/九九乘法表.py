for i in range(1,9):
    #range是左闭右开
    for j in range(1,i+1):
        print(j,"*",i,"=",i*j,end='\t')
    print()