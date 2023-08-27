T = 10
for tc in range(1, T + 1):
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]
    cnt = 0
    for j in range(N):
        temp = 0
        for i in range(N):
            if arr[i][j] == 2 and temp == 1:
                cnt += 1
                temp = 0
            elif arr[i][j] == 1:
                temp = 1
    print(f'#{tc} {cnt}')