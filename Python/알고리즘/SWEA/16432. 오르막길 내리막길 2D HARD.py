T = int(input())

for tc in range(1, T+1):
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]

    # 8방향 설정
    di = [-1, -1, -1, 0, 0, 1, 1, 1]
    dj = [-1, 0, 1, -1, 1, -1, 0, 1]

    # 산의 정상에 해당하는지 검사하고 해당하면 체커에 추가
    checker = []
    for i in range(1, N - 1):
        for j in range(1, N - 1):
            k = 0
            while k < 8:
                if arr[i][j] > arr[i + di[k]][j + dj[k]]:
                    k += 1
                else:
                    break
            if k == 8:
                checker.append(arr[i][j])
    
    # 산의 정상이 하나 이하이면 -1 출력
    if len(checker) <= 1:
        print(f'#{tc} -1')
        continue
        
    # 최대값, 최소값
    max_val = max(checker)
    min_val = min(checker)
    
    print(f'#{tc} {max_val - min_val}')