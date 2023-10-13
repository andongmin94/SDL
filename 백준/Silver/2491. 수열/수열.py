a = int(input())
b = list(map(int, input().split()))
c = 1
max_v = 1
for i in range(1, a):
    if b[i-1] <= b[i]:
        c += 1
        if max_v < c:
            max_v = c
    else:
        c = 1

c = 1

for i in range(1, a):
    if b[i-1] >= b[i]:
        c += 1
        if max_v < c:
            max_v = c
    else:
        c = 1

print(max_v)