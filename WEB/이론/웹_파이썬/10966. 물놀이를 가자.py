from collections import deque

T = int(input())

for tc in range(1, T + 1):
    N, M = map(int, input().split())
    dir = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    visited = [[-1] * M for _ in range(N)]
    queue = deque()
    
    for i in range(N):
        t = input()
        for j in range(M):
            if t[j] == 'W':
                queue.append((i, j))
                visited[i][j] = 0
    res = 0
    while queue:
        di, dj = queue.popleft()
        for y, x in dir:
            ny, nx = di + y, dj + x
            if 0 <= ny < N and 0 <= nx < M and visited[ny][nx] == -1:
                queue.append((ny, nx))
                visited[ny][nx] = visited[di][dj] + 1
                res += visited[ny][nx]

    print(f'#{tc} {res}')
