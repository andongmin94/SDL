def f(depth, s):
    global ans
    if ans < s:
        return
 
    if depth == N:
        if ans > s:
            ans = s
        return
 
    for i in range(N):
        if fac[i] == False:
            fac[i] = True
            f(depth+1, s+arr[i][depth])
            fac[i] = False
 
for tc in range(1, int(input()) + 1):
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]
    ans = 15 * 100
 
    fac = [False] * N
    f(0, 0)
 
    print(f'#{tc} {ans}')