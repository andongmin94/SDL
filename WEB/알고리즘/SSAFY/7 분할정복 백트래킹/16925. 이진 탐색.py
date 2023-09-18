def binarySearch(target):
    low = 0
    high = len(A) - 1
    check = None
    # low > high 라면 데이터를 못 찾은 경우
    while low <= high:
        mid = (low + high) // 2

        # 1. 가운데 값이 정답인 경우
        if A[mid] == target:
            return 1

        # 2. 가운데 값이 정답보다 작은 경우
        elif A[mid] < target:
            low = mid + 1
            if check == True:
                return 0
            check = True
        else:
            high = mid - 1
            if check == False:
                return 0
            check = False
    return 0

T = int(input())
for tc in range(1, T + 1):
    N, M = map(int, input().split())
    A = sorted(list(map(int,input().split())))
    B = list(map(int,input().split()))
    cnt = 0
    for i in range(M):
        if binarySearch(B[i]) == 1:
            cnt += 1
    print(f'#{tc} {cnt}')