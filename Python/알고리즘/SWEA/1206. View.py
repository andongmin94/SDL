for tc in range(1, 11):
    N = int(input())
    buildings = list(map(int, input().split()))
    view_num = 0

    for idx in range(2, N - 2):
        b1 = buildings[idx - 2]
        b2 = buildings[idx - 1]
        center = buildings[idx]
        b3 = buildings[idx + 1]
        b4 = buildings[idx + 2]
        mx_b = max(b1, b2, b3, b4)

        if center > mx_b:
            view_num += center - mx_b

    print(f'#{tc} {view_num}')
