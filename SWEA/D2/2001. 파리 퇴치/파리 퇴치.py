T = int(input())
for tc in range(1, T + 1):
    N, M = map(int, input().split())

    arr = [list(map(int, input().split())) for _ in range(N)]

    mx_r = 0

    for i in range(N - M + 1):
        for j in range(N - M + 1):
            result = 0
            for di in range(M):
                for dj in range(M):
                    result += arr[i + di][j + dj]
            if mx_r < result:
                mx_r = result

    print(f'#{tc} {mx_r}')