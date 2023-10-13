#'a' 는 97임

a = input()
b = len(a)
c = [0] * 26


for i in range(b):
    c[(ord(a[i])-97)] += 1
print(*c)