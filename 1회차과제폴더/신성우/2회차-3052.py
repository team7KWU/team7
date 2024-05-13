num_list=[]
for i in range(10):
    num=int(input())
    num_div = num%42

    num_list.append(num_div)

num_div_set = set(num_list)
num_div_number = len(num_div_set)
print(num_div_number)