for _ in range(10):
    tc = int(input())
    i = 1
    password = list(map(int, input().split()))
    while (True):
        범인 = password.pop(0) - i
        if 범인 <= 0:
            범인 = 0
            password.append(범인)
            break
        password.append(범인)
        i += 1
        if i == 6:
            i = 1
    print(f'#{tc}', *password)