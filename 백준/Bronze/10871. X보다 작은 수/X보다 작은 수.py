N = list(map(int, input().split()))

A = list(map(int, input().split()))

for i in A:
    if i < N[1]:
        print(i, end=' ')