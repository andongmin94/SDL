for tc in range(1, 11):

    di = [0, 1, 0, -1]
    dj = [1, 0, -1, 0]

    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]
    res = 0
    
    for i in range(N):
        for j in range(N):
            for k in range(4):
                ni, nj = i + di[k], j + dj[k]
                if 0 <= ni < N and 0 <= nj < N:
                    res += abs(arr[i][j] - arr[ni][nj])
                    
    print(f'#{tc} {res}')