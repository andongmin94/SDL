T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = [list(map(int, input())) for _ in range(N)]
    farm = 0
    farm_minus = 0
    for_minus = N // 2
    for i in range(N):
        for j in range(N):
            farm += arr[i][j]

    for i in range(for_minus):
        for j in range(for_minus-i):
            farm_minus += arr[i][j]
    for i in range(for_minus):
        for j in range(for_minus-i):
            farm_minus += arr[i][N-1-j]
    for i in range(for_minus):
        for j in range(for_minus-i):
            farm_minus += arr[N-1-i][j]
    for i in range(for_minus):
        for j in range(for_minus-i):
            farm_minus += arr[N-1-i][N-1-j]

    print(f'#{tc} {farm - farm_minus}')