T = int(input())

for tc in range(1, T + 1):
    N, M = map(int, input().split())
    arr = list(map(int, input().split()))

    queue = []
    for i in range(N):
        queue.append(i)

    idx = N

    while len(queue) > 1:
        arr[queue[0]] //= 2
        if arr[queue[0]] == 0:
            queue.pop(0)
            if idx < M:
                queue.append(idx)
                idx += 1
        else:
            queue.append(queue.pop(0))

    print(f'#{tc} {queue[0]+1}')