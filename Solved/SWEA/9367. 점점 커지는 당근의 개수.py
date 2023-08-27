# 점점 커지는 당근의 개수

T = int(input())

for test_case in range(1, T + 1):

    N = int(input())
    C = list(map(int, input().split()))

    mx = 0
    cnt = 1
    for i in range(1, N):
        if C[i] == C[i-1] + 1:
            cnt += 1
        else:
            if mx < cnt:
                mx = cnt
                cnt = 1
    if mx < cnt:
        mx = cnt

    print(f'#{test_case} {mx}')