num_list=[]

for i in range(28):
    num = int(input())

    num_list.append(num)

num_list2=sorted(num_list)
for i in range(1, 3):
    if i not in num_list2:
        print(i)