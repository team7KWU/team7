# 각 문자를 세는 함수
def count_characters(word):
    char_count = {}

    for char in word:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1
    
    return char_count

# 가장 개수가 많은 문자를 출력하는 함수
def up_list(word, dict, max_val):
    # 빈 집합 생성
    char_set = set()
    # 빈 리스트 생성
    char_list=[]
    for char in word:
        if (dict[char] == max_val):
            char_set.add(char)
    
    if (len(char_set) >= 2):
        print("?")
    else:
        char_list = list(char_set)
        print(char_list[0])
    


# 입력한 문자열을 대문자로 변경
s = input().upper()
# 각 문자와 갯수가 매핑된 딕셔너리
dic_char = count_characters(s)

# 가장 많은 문자의 갯수
max_value = max(dic_char.values())

up_list(s, dic_char, max_value)

