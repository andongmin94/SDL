T = int(input())

for tc in range(1, T+1):
    N, M = map(int, input().split())
    array = [list(map(int, input().split())) for _ in range(N)]
    di = [-1, 0, 1, 0]
    dj = [0, 1, 0, -1]
    max_r = 0
    
    for i in range(N):
        for j in range(M):
            s = array[i][j]
            for k in range(4):
                for l in range(1, array[i][j] + 1):
                    ni = i + di[k] * l
                    nj = j + dj[k] * l
                    if 0 <= ni < N and 0 <= nj < M:
                        s += array[ni][nj]
            if max_r < s:
                max_r = s

    print(f'#{tc} {max_r}')