n = int(input())

# 다이아몬드의 윗부분 출력
for i in range(1, n+1):
    print(' ' * (n-i) + '*' * (2*i-1) + ' ' * (n-i))

# 다이아몬드의 아랫부분 출력
for i in range(n-1, 0, -1):
    print(' ' * (n-i) + '*' * (2*i-1) + ' ' * (n-i))
