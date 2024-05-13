a,b,c = map(int, input().split())

money=0
temp=0

if(a==b and b==c):
    money = 1000*a+10000
    print(money)
elif(a==b and a!=c):
    money = 100*a+1000
    print(money)
elif(a==c and a!=b):
    money = 100*a+1000
    print(money)
elif(b==c and b!=a):
    money=100*b+1000
    print(money)
elif(a!=b and a!=c):
    if(b!=c):
        temp=a
        n_list=[a,b,c]
        for i in n_list:
            if(temp<i):
                temp=i
        money = temp*100
        print(money)