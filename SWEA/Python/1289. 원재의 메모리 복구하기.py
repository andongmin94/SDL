T = int(input())
for tc in range(1, T + 1):
    N = input()
    cnt = 0
    if N[0] == '1':
        cnt += 1
    for i in range(1, len(N)):
        if N[i] != N[i-1]:
            cnt +=1
    print(f'#{tc} {cnt}')        