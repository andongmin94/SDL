T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]

    di = [-1, -1, -1, 0, 0, 1, 1, 1]
    dj = [-1, 0, 1, -1, 1, -1, 0, 1]
    
    check = []
    
    for i in range(1, N - 1):
        for j in range(1, N - 1):
            k = 0
            while k < 8:
                if arr[i][j] > arr[i + di[k]][j + dj[k]]:
                    k += 1
                else:
                    break
            if k == 8:
                check.append(arr[i][j])
                
    if len(check) <= 1:
        print(f'#{tc} -1')
        continue

    max_val = max(check)
    min_val = min(check)

    print(f'#{tc} {max_val - min_val}')