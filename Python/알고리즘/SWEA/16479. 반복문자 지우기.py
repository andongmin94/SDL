T = int(input())
for tc in range(1, T + 1):
    str = input()
    i = 0
    while i < len(str) - 1:
        if str[i] == str[i + 1]:
            # 겹치는 부분 앞까지 슬라이싱 // 겹치는 부분 뒤부터 슬라이싱
            str = str[:i] + str[i + 2:]
            i = 0
            continue
        i += 1
    print(f'#{tc} {len(str)}')
