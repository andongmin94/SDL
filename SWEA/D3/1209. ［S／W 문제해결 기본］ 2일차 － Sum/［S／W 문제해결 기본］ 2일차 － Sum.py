for T in range(1, 11):
    tc = int(input())
    arr = [list(map(int, input().split())) for _ in range(100)]

    mx_r = 0

    for i in range(100):
        result = 0
        for j in range(100):
            result += arr[i][j]
            if mx_r < result:
                mx_r = result

    for j in range(100):
        result = 0
        for i in range(100):
            result += arr[i][j]
            if mx_r < result:
                mx_r = result

    result = 0
    for i in range(100):
        for j in range(100):
            if i == j:
                result += arr[i][j]
    if mx_r < result:
        mx_r = result

    result = 0
    for i in range(100):
        for j in range(100):
            if j == 99 - i:
                result += arr[i][j]
    if mx_r < result:
        mx_r = result

    print(f'#{tc} {mx_r}')