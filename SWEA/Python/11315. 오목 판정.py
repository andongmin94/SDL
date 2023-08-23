T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = [list(input()) for _ in range(N)]
    ans = -1
    di = [0, 1, 1, 1, 0, -1, -1, -1]
    dj = [1, 1, 0, -1, -1, -1, 0, 1]
    for i in range(N):
        for j in range(N):
            if arr[i][j] == 'o':
                for k in range(8):
                    cnt = 0
                    for l in range(5):
                        ni, nj = i + di[k] * l, j + dj[k] * l
                        if 0 <= ni < N and 0 <= nj < N and arr[ni][nj] == 'o':
                            cnt +=1
                    if cnt == 5:
                        ans = 1

    if ans != -1:
        print(f'#{tc} YES')
    else:
        print(f'#{tc} NO')