T = int(input())
for tc in range(1, T + 1):
    arr = list(map(int, input().split()))
    c1 = [0] * 12
    c2 = [0] * 12
    check = -1
    player1 = []
    player2 = []
    player1.append(arr[0])
    player1.append(arr[2])
    player1.append(arr[4])
    player1.append(arr[6])
    player1.append(arr[8])
    player1.append(arr[10])
    player2.append(arr[1])
    player2.append(arr[3])
    player2.append(arr[5])
    player2.append(arr[7])
    player2.append(arr[9])
    player2.append(arr[11])
    for i in range(6):
        c1[player1[i]] += 1
        c2[player2[i]] += 1
    for i in range(10):
        if c1[i] >= 3:
            c1[i] -= 3
            print(f'#{tc} {1}')
            check += 1
            break
        if c2[i] >= 3:
            c2[i] -= 3
            print(f'#{tc} {2}')
            check += 1
            break
        if c1[i] >= 1 and c1[i+1] >= 1 and c1[i+2] >= 1:
            c1[i] -=1
            c1[i+1] -= 1
            c1[i+2] -= 1
            print(f'#{tc} {1}')
            check += 1
            break
        if c2[i] >= 1 and c2[i+1] >= 1 and c2[i+2] >= 1:
            c2[i] -=1
            c2[i+1] -= 1
            c2[i+2] -= 1
            print(f'#{tc} {2}')
            check += 1
            break
    if check == -1:
        print(f'#{tc} {0}')