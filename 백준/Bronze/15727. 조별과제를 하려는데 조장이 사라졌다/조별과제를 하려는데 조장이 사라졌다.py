N = int(input())
t = 0
while True:
    if N <= 0:
        break
    N = N - 5
    t += 1
print(t)