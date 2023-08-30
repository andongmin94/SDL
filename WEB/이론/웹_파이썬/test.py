T = int(input())
for tc in range(1, T + 1):
    arr = list(map(int, input().strip()))
    c = [0] * 12
    check = 0
    player = [arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]]
    for i in range(6):
        c[player[i]] += 1
    k = 0
    while (k < 10):
        if c[k] >= 3:
            c[k] -= 3
            check += 1
            k -= 1
            if check >= 2:
                print(f'#{tc} true')
                break
            continue
        if c[k] >= 1 and c[k + 1] >= 1 and c[k + 2] >= 1:
            c[k] -= 1
            c[k + 1] -= 1
            c[k + 2] -= 1
            check += 1
            k -= 1
            if check >= 2:
                print(f'#{tc} true')
                break
            continue
        k += 1
    if check != 2:
        print(f'#{tc} false')