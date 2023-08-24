T = int(input())

for tc in range(1, T + 1):
    N, M = map(int, input().split())
    arr = list(map(int, input().split()))

    mn = 1000000
    mx = 0

    for i in range(N - M + 1):
        total = 0
        for j in range(M):
            total += arr[i + j]
        if total < mn:
            mn = total
        if total > mx:
            mx = total

    result = mx - mn

    print(f'#{tc} {result}')