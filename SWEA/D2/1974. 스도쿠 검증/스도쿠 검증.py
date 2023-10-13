T = int(input())

for tc in range(1, T + 1):
    N = 9
    arr = [list(map(int, input().split())) for _ in range(N)]

    res = 1

    # 가로 순회 : 가로에 중복 요소가 있나?
    for i in range(N):
        # set 자료형 : 중복 요소x
        check = set()
        for j in range(N):
            check.add(arr[i][j])
        if len(check) != N:
            res = 0 

    # 세로 순회 : 세로에 중복 요소가 있나?
    for j in range(N):
        # set 자료형 : 중복 요소x
        check = set()
        for i in range(N):
            check.add(arr[i][j])
        if len(check) != N:
            res = 0

    # 3 x 3  순회 : 3 x 3에 중복 요소가 있나?
    for i in range(0, 9, 3):
        for j in range(0, 9, 3):
            check = set()
            for x in range(3):
                for y in range(3):
                    check.add(arr[i+x][j+y])
            if len(check) != N:
                res = 0

    print(f'#{tc} {res}')