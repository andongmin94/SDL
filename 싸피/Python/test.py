# 1966. 숫자를 정렬하자
T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = list(map(int, input().split()))

    for i in range(N - 1, 0, -1): # i는 구간의 마지막 인덱스
        for j in range(i): # i - 1까지 가야하므로 i로 설정하면 됌.
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    print(f'#{tc}', *arr)