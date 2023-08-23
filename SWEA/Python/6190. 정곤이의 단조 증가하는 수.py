T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = list(map(int, input().split()))
    max_v = -1
    for i in range(N-1):
        for j in range(i + 1, N):
            check = str(arr[i] * arr[j])
            check2 = int(check[0])
            error = 0
            for k in range(len(check)):
                if check2 <= int(check[k]):
                    check2 = int(check[k])
                else:
                    error = -1
            if error != -1 and max_v < int(check):
                max_v = int(check)
    print(f'#{tc} {max_v}')