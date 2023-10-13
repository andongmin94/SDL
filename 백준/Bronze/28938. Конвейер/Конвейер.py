a = int(input())
b = list(map(int, input().split()))
c = 0
for i in range(a):
    c += b[i]

if c <= -1:
    print('Left')
elif c >= 1:
    print('Right')
else:
    print('Stay')