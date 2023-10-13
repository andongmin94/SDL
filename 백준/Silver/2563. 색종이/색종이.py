arr = [[0] * 100 for _ in range(100)]
N = int(input())

cnt = 0
for tc in range(N):
    x, y = map(int, input().split())
    for i in range(10):
        for j in range(10):
            arr[x + i - 1][y + j - 1] = 1
            
for i in range(100):
    for j in range(100):
        cnt += arr[i][j]

print(cnt)