def cal(n):
    ans = [0] * 10
    n = str(n)
    for i in range(10):
        for j in range(len(n)):
            if n[j] == str(i):
                ans[i] += 1
        print(ans[i])

A = int(input())
B = int(input())
C = int(input())
cal(A*B*C)