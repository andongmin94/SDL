for tc in range(1, 11):
    n = int(input())
    arr = list(map(int, input().split()))
    flat = n

    for i in range(n):
        arr.sort()
        arr[0] += 1
        arr[-1] -= 1
        flat -= 1
        if flat == 0:
            break

    diff = max(arr) - min(arr)
    print(f'#{tc} {diff}')