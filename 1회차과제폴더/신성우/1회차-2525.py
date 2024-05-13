A,B=map(int, input().split())
C=int(input())

if(B+C>=60):
    n1=(B+C)
    n2=(B+C)
    if(A+n1>=24):
        A=(A+n1)-24
        B=n2
        print(A,B)
    else:
        A=A+n1
        B=n2
        print(A,B)
else:
    B=B+C
    print(A,B)