a, b = map(int, input().split())
c = []
for i in range(a):
    c.append(input())
    print(c[i][::-1])