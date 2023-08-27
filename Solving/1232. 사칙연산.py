for tc in range(1, 11):
    N = int(input())
    nodes = [0] * (N + 1)
    arr = [0] + [input().split() for _ in range(N)]

    for i in range(N, 0, -1):
        t = arr[i][1]
        if not t.isdigit():
            if t == '+':
                arr[i][1] = int(arr[int(arr[i][2])][1]) + int(arr[int(arr[i][3])][1])
            elif t == '-':
                arr[i][1] = int(arr[int(arr[i][2])][1]) - int(arr[int(arr[i][3])][1])
            elif t == '*':
                arr[i][1] = int(arr[int(arr[i][2])][1]) * int(arr[int(arr[i][3])][1])
            elif t== '/':
                arr[i][1] = int(arr[int(arr[i][2])][1]) // int(arr[int(arr[i][3])][1])

    print(f'#{tc}', arr[1][1])