T = int(input())

for tc in range(1, T + 1):
    N, M, K = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()

    time = 0
    K_flat = 0
    
    while True:
        if N == 0 or time > arr[0]:
            break
        time += 1
        if time % M == 0:
            K_flat += K
        i = 0
        while i <= N:
            if time == arr[0]:
                if K_flat > 0:
                    K_flat -= 1
                    arr.pop(0)
                    N -= 1
                else:
                    break
            i += 1
    if N == 0:
        print(f'#{tc} Possible')
    else:
        print(f'#{tc} Impossible')