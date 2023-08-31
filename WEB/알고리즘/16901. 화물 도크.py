T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]
    print(arr)
    arr.sort(key=lambda x: x[1])
    print(arr)
    cnt = 1
    j = 0
    for i in range(1, N):
        if arr[j][1] <= arr[i][0]:
            j = i
            cnt += 1
    print(f'#{tc} {cnt}')
