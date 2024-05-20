n = input().split()
chess_num = [1, 1, 2, 2, 2, 8]

for i in range(6):
    find_num = int(n[i])
    add_or_rev = chess_num[i] - find_num
    print(add_or_rev, end=' ')
