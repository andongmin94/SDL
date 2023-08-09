def palindrome(array, n):
    temp = array[:]
    reverse = []
    for i in range(n):
        reverse.append(temp.pop())
    if array == reverse:
        return True
    else:
        return False

for tc in range(1, 11):
    N = int(input())
    array = [list(input()) for _ in range(8)]
    cnt = 0

    # # 가로
    # for i in range(8):
    #     for j in range(9 - N):
    #         if array[i][j:j + N] == array[i][j:j + N][::-1]:
    #             cnt += 1
    # # 세로
    # for i in range(8):
    #     for j in range(9 - N):
    #         col = []
    #         for k in range(N):
    #             col.append(array[j + k][i])
    #         if col == col[::-1]:
    #             cnt += 1
    # print(f'#{tc} {cnt}')

    # 가로
    for i in range(8):
        for j in range(9 - N):
            col = []
            for k in range(N):
                col.append(array[i][j + k])
            if palindrome(col, N):
                cnt += 1
    # 세로
    for i in range(8):
        for j in range(9 - N):
            row = []
            for k in range(N):
                row.append(array[j + k][i])
            if palindrome(row, N):
                cnt += 1
    print(f'#{tc} {cnt}')