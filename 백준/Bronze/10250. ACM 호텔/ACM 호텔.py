T = int(input())
for tc in range(1, T + 1):
    H, W, N = map(int, input().split())
    a = str(N % H)
    b = str(N // H + 1)
    if int(a) == 0:
        a = str(H)
        b = str(N // H)
    if int(b) < 10:
        print(a + '0' + b)
    else:
        print(a + b)