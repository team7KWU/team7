H, M = map(int, input().split())

if(M>=45):
    M = M-45
    print(H,M)
else:
    M=(60+M)-45
    if(M==0):
        H=23
        print(H,M)
    else:
        H=H-1
        print(H,M)