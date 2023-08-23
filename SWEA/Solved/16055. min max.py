T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    a = list(map(int, input().split()))

    mn = min(a)
    mx = max(a)

    diff = mx - mn
    print(f'#{tc} {diff}')