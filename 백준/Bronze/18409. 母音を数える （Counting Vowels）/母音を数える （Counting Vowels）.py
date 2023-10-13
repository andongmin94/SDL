a = int(input())
b = input()
c = 0
for i in range(a):
    if b[i] == 'a' or b[i] == 'e' or b[i] == 'i' or b[i] == 'o' or b[i] == 'u':
        c += 1
print(c)
    