T = int(input())
for tc in range(1, T+1):
    arr = [list(map(str, input())) for _ in range(5)]
    print(f'#{tc}', end = ' ')
    for i in range(5):
        if (len(arr[i]) != 15):
            for j in range(15-len(arr[i])):
                arr[i].append('')

    for i in range(15):
        for j in range(5):
            print(arr[j][i], end = '')
    print()