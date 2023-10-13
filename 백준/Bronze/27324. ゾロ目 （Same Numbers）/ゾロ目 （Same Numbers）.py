N = int(input())
if N % 10 == 0:
    print(0)
elif (N // 10) == (N % 10):
    print(1)
else:
    print(0)