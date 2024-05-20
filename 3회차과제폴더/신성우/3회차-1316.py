N = int(input())
count = 0
for i in range(N):
    s = input().lower()
    list_s = list(s)
    list_p = []
    for j in range(len(list_s)):
        if len(list_p) == 0:
            list_p.append(list_s[j])
            if j == len(list_s)-1:
                count += 1
                break
            continue
        elif len(list_p) == 1:
            list_p.append(list_s[j])
            if j == len(list_s)-1:
                count += 1
                break
            continue
        elif len(list_p) >= 2:
            if list_p[-1] != list_s[j]:
                if list_s[j] in list_p:
                    break
                else:
                    list_p.append(list_s[j])
                    if j == len(list_s)-1:
                        count += 1
                        break
                    continue
            else:
                list_p.append(list_s[j])
                if j == len(list_s)-1:
                    count += 1
                    break
                continue

print(count)

        
        


        