T = int(input())

for tc in range(1, T+1):
    N = int(input())
    arr = [[0] * 10 for _ in range(10)]
    cnt = 0
    for i in range(N):
        r1, c1, r2, c2, color = map(int, input().split())
        if color == 1:
            for r in range(r1, r2+1):
                for c in range(c1, c2+1):
                    if arr[r][c] == 2:
                        cnt += 1
                    arr[r][c] = color
        if color == 2:
            for r in range(r1, r2+1):
                for c in range(c1, c2+1):
                    if arr[r][c] == 1:
                        cnt += 1
                    arr[r][c] = color
    print(f'#{tc} {cnt}')