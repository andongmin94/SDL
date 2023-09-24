from collections import deque
d = [[0,1],[0,-1],[1,0],[-1,0]]
 
def bfs(x,y):
    q = deque([[x,y]])
    while q:
        x,y = q.popleft()
        for dx, dy in d:
            nx = x + dx
            ny = y + dy
            if 0<=nx<n and 0<=ny<n:
                if arr[nx][ny]>arr[x][y] and (not visit[nx][ny] or visit[nx][ny]> visit[x][y] + 1 + arr[nx][ny] - arr[x][y]):
                    visit[nx][ny] = visit[x][y] + 1 + arr[nx][ny]-arr[x][y]
                    q.append([nx,ny])
                elif arr[nx][ny]<=arr[x][y] and (not visit[nx][ny] or visit[nx][ny]> visit[x][y] + 1):
                    visit[nx][ny] = visit[x][y] + 1
                    q.append([nx,ny])
    return visit[n-1][n-1]
 
for t in range(int(input())):
    n = int(input())
    arr = [list(map(int, input().split())) for _ in range(n)]
    visit = [[0]*n for _ in range(n)]
    print(f'#{t+1} {bfs(0,0)}')