n = int(input())

for i in range(1, n+1):
    # 왼쪽 여백을 추가
    print(' ' * (n-i), end='')
    # '*' 출력
    print('*' * (2*i-1), end='')
    # 오른쪽 여백을 추가
    print(' ' * (n-i))

for i in range(n-1, 0, -1):
    print(' ' * (n-i), end='')

    print('*' * (2*i-1), end='')

    print(' ' * (n-i))
    