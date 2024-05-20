s = input()
s_list = list(s)
s2_list = []
for i in range(len(s)):
    if s_list[i] != s_list[(len(s)-1)-i]:
        print(0)
        break
    elif s_list[i] == s_list[(len(s)-1)-i]:
        s2_list.append(s_list[(len(s)-1)-i])
        
if s2_list == s_list:
    print(1)
