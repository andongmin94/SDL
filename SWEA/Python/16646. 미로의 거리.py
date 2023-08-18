def bfs(start_l, start_r, N):
    visited = [[0] * N for _ in range(N)]
    q = []
    q.append((start_l, start_r))
    visited[start_l][start_r] = 1
    while q:
        i, j = q.pop(0)
        if maze[i][j] == 3:
            return visited[i][j] - 2
        for di, dj in [[0, 1], [1, 0], [0, -1], [-1, 0]] :
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and maze[ni][nj] != 1 and visited[ni][nj] == 0:
                q.append((ni, nj))
                visited[ni][nj] = visited[i][j] + 1
    return 0

def find_start(a):
    for i in range(N):
        for j in range(N):
            if maze[i][j] == a:
                return i, j

T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    maze = [list(map(int, input())) for _ in range(N)]
    
    R, L = find_start(2)
    ans = bfs(R, L, N)
    print(f'#{tc} {ans}')