T = int(input())
for tc in range(1, T + 1):
    N, M = map(int, input().split())
    arr = [list(map(int, input().split())) for _ in range(N)]
    di = [0, 1, 0, -1]
    dj = [1, 0, -1, 0]
    di2 = [1, 1, -1, -1]
    dj2 = [1, -1, -1, 1]
    max_v = 0
    
    for i in range(N):
        for j in range(N):
            s = arr[i][j]
            for k in range(4):
                for l in range(1, M):
                    ni = i + di[k] * l
                    nj = j + dj[k] * l
                    if 0 <= ni < N and 0 <= nj < N:
                        s += arr[ni][nj]
            if max_v < s:
                max_v = s
                
    for i in range(N):
        for j in range(N):
            s = arr[i][j]
            for k in range(4):
                for l in range(1, M):
                    ni = i + di2[k] * l
                    nj = j + dj2[k] * l
                    if 0 <= ni < N and 0 <= nj < N:
                        s += arr[ni][nj]
            if max_v < s:
                max_v = s
    print(f'#{tc} {max_v}')