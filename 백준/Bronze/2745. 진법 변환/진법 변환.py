N, B = input().split()
B = int(B)

res = 0
c = 0

for i in reversed(N):
    if i.isdigit():
        int_i = int(i)
    else:
        int_i = ord(i) - 55

    res += int_i * (B ** c)
    c += 1

print(res)