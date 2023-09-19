T = int(input())
for tc in range(1, T + 1):
    arr = list(map(int, input().split()))
    N = arr.pop(0)


    ans = 0
    stage = [[N, 0]]
    while True:
        energy, charge = stage.pop()
        if energy <= arr[0] + 1:
            ans = charge
            break
        for i in range(N-2, -1, -1):
            if energy <= i + 1 + arr[i]:
                stage.append([i + 1, charge + 1])
    print(f'#{tc} {ans}')