T = int(input())

for tc in range(1, T + 1):
    N, Q = map(int, input().split())
    arr = [0] * N
    for tri in range(Q):
        L, R = map(int, input().split())
        for i in range(L, R + 1):
            arr[i - 1] = tri + 1
    print(f'#{tc} {" ".join(map(str, arr))}')