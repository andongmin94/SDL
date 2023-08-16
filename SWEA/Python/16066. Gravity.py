T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    arr = list(map(int, input().split()))
    mx = 0

    for i in range(N):
        down = 0
        for j in range(i + 1, N):
            if arr[i] > arr[j]:
                down += 1
        if mx < down:
            mx = down

    print(f'#{tc} {mx}')















