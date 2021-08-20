for _ in range(int(input())):
    a,b,c,d,e,f=map(int,input().split())
    a1=a+b+c
    a2=d+e+f
    if(a>d):
        print(1)
    elif(a<d):
        print(2)
    else:
        if(b>e):
            print(1)
        elif(b<2):
            print(2)
        else:
            if(c>f):
                print(1)
            else:
                print(2)
