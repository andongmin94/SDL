T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    num = input()
    
    best = 0
    best_num = 0
    
    for i in range(N):
        temp = 0
        for j in range(N):
            if int(num[i]) == int(num[j]):
                temp += 1
        if best <= temp:
            best = temp
            if best_num < int(num[i]):
                best_num = int(num[i])
    
    print(f'#{tc} {best_num} {best}')