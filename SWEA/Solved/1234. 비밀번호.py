for i in range(1, 11):
    N, M = map(str, input().split())
    N = int(N)
    j = 0
    while j < len(M) - 1:
        if M[j] == M[j + 1]:
            M = M[:j] + M[j + 2:]
            j = 0
            continue
        j += 1
    print(f'#{i} {M}')