T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    i, j, k, l = map(int, input().split())
    arr = [list(map(int, input().split())) for _ in range(N)]
    chicken = 0
    chicken_box = 0
    chicken_cnt = 0
    if k == 0:
        k = 1
    if l == 0:
        l = 1
    for a in range(k):
        for b in range(l):
            chicken += arr[i + a][j + b]
            chicken_box += 1
    chicken_avg = chicken // chicken_box
    for a in range(k):
        for b in range(l):
            if chicken_avg > arr[i + a][j + b]:
                chicken_cnt += chicken_avg - arr[i + a][j + b]
            elif chicken_avg < arr[i + a][j + b]:
                chicken_cnt += arr[i + a][j + b] - chicken_avg
    print(f'#{tc} {chicken_cnt}')