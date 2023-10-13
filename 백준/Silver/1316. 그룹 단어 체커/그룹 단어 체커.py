T = int(input())
cnt = 0
for tc in range(1, T + 1):
    str = input()
    str_list = []
    str_list.append(str[0])
    str_num = 1
    for i in range(1, len(str)):
        if str[i] == str[i-1] and str[i] in str_list:
            str_num += 1
            continue
        if str[i] != str[i-1] and str[i] in str_list:
            break
        if str[i] not in str_list:
            str_list.append(str[i])
            str_num += 1
            continue
    if str_num == len(str):
        cnt += 1
print(cnt)