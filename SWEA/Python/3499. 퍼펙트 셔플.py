T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    arr = list(map(str, input().split()))
    arr_f = []
    arr_b = []
    res = []
    if N % 2 == 0:
        M = N // 2
    else:
        M = (N // 2) + 1

    for i in range(M):
        arr_f.append(arr[i])
    for i in range(1, N - M + 1):
        arr_b.append(arr[-i])
    arr_b.reverse()

    if N % 2 == 0:
        for i in range(M):
            res.append(arr_f[i])
            res.append(arr_b[i])
    else:
        for i in range(M - 1):
            res.append(arr_f[i])
            res.append(arr_b[i])
        res.append(arr_f[-1])

    print(f'#{tc}', *res)