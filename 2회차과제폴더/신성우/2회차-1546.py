num_list = []

N=int(input())

num=input().split()
num_list.extend(map(int,num))

num_list=sorted(num_list)

sum=0
for i in range(N):
    num_list[i] = num_list[i]/num_list[N-1]*100

    sum+=num_list[i]
print(sum/N)