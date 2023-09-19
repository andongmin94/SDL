def dfs(x, y, chk, i, s):
    global cnt
    if i == 7:
        chk.add(s)
        cnt += 1
        return
    for k in range(4):
        nx = x + dx[k]
        ny = y + dy[k]
        if 0 <= nx < 4 and 0 <= ny < 4:
            dfs(nx, ny, chk, i+1, s+str(arr[nx][ny]))
 
T = int(input())
for tc in range(1, T+1):
    arr = [list(map(int, input().split())) for _ in range(4)]
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    chk = set()
    s = ''
    cnt = 0
    for i in range(4):
        for j in range(4):
            dfs(i, j, chk, 0, s)
    print(f'#{tc} {len(chk)}')