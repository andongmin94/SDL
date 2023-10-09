def BFS(s):
    q = [s]
    visited[s] = 1
    while q:
        x = q.pop(0)
        for w in ans[x]:
            if visited[w] == 0:
                q.append(w)
                visited[w] = visited[x] + 1

for tc in range(1, 11):
    N, s = map(int, input().split())
    arr = list(map(int, input().split()))
    visited = [0] * 101
    ans = [[] for _ in range(101)]
    for i in range(N//2):
        ans[arr[i * 2]].append(arr[i * 2 + 1])
    BFS(s)
    res = []
    mx = 0
    for i in range(101):
        if mx <= visited[i]:
            mx = visited[i]
            res = i
    print(f'#{tc} {res}')