T = int(input())

for tc in range(1, T + 1):
    N, M = map(int, input().split())
    w = list(map(int, input().split()))
    t = list(map(int, input().split()))

    w.sort()
    t.sort()

    res = 0
    while w and t:
        w_ = w.pop()
        if w_ <= t[-1]:
            t.pop()
            res += w_

    print(f'#{tc} {res}')