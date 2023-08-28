T = int(input())

for tc in range(1, T + 1):
    # K : 버스가 한번에 갈 수 있는 거리
    # N : 시작점과 종점 사이의 거리
    # M : 충전기가 놓여있는 댓수
    K, N, M = map(int, input().split())
    arr = [0] + list(map(int, input().split())) + [N]

    # 충전횟수를 카운트할 변수
    charged = 0
    # 버스의 현재 위치 (출발점부터)
    start = 0
    for i in range(1, M + 2):
        if arr[i] - arr[i - 1] > K:
            charged = 0
            break

        if arr[i] - start > K:
            start = arr[i - 1]
            charged += 1

    print(f'#{tc} {charged}')