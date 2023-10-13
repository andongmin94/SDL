def bfs(L, R, size):
    visited = [[0] * size for _ in range(size)]  # visited 생성
    q = []  # 큐 생성
    q.append((L, R))  # 시작점 인큐
    visited[L][R] = 1
    while q:
        i, j = q.pop(0)
        if maze[i][j] == 3: # 처리
            return 1 # 가능
        for di, dj in [[0, 1], [1, 0], [0, -1], [-1, 0]] :
            ni, nj = i + di, j + dj
            if 0 <= ni < 100 and 0 <= nj < 100 and maze[ni][nj] != 1 and visited[ni][nj] == 0:
                q.append((ni, nj))
                visited[ni][nj] = 1
    return 0
    
def find_start(a):
    for i in range(100):
        for j in range(100):
            if maze[i][j] == a:
                return i, j

for tc in range(1, 11):
    trash = input()
    maze = [list(map(int, input())) for _ in range(100)]

    L_idx, R_idx = find_start(2)
    ans = bfs(L_idx, R_idx, 100)
    print(f'#{tc} {ans}')