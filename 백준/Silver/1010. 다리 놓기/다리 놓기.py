def combine(n):
    if n <= 1:
        return 1
    return n * combine(n - 1)


T = int(input())
for tc in range(1, T + 1):
    N, M = map(int, input().split())
    print(int(combine(M) / (combine(M-N) * combine(N))))