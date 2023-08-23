T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]
    di = [1, 0, -1, 0]
    dj = [0, 1, 0, -1]
    max_v = 0
    min_v = 10000
    for i in range(N):
        for j in range(N):
            s = arr[i][j]
            for k in range(4):
                for l in range(1, arr[i][j] + 1):
                    ni = i + di[k] * l
                    nj = j + dj[k] * l
                    if 0 <= ni < N and 0 <= nj < N:
                        s += arr[ni][nj]
            if max_v < s:
                max_v = s
            if min_v > s:
                min_v = s
    print(f'#{tc} {max_v - min_v}')