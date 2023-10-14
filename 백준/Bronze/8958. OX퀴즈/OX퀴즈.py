N = int(input())
for tc in range(1, N + 1):
    T = input()
    sum_v = 0
    cnt = 0
    for i in range(len(T)):
        if T[i] == 'O':
            cnt += 1
            sum_v += cnt
        else:
            cnt = 0
    print(sum_v)