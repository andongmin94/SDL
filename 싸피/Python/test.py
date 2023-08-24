for tc in range(11):
    print(f'#{tc}', end=" ")
    N = int(input())
    not_table = [list(map(int, input().split())) for _ in range(N)]
    # 왼쪽이 N극... N극 성질의 자성체는 1
    # 오른쪽이 S극... S극 성질의 자성체는 2
    table = list((map(list, zip(*not_table))))

    print(table)
