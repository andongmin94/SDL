def dfs1(v):
    global visited
    visited[v] = True
    # v노드에서 갈 수 있는 노드를 확인 (인접한 노드)
    for u in range(len(graphs)):
        if graphs[v][u] == 1 and visited[u] == False:
            dfs1(u)

for tc in range(1, 11):
    N, V = map(int, input().split())
    graphs = [[0] * 100 for _ in range(100)]
    visited = [False for _ in range(100)]
    adj = []
    adj.extend(list(map(int, input().split())))

    for idx in range(0, len(adj), 2):
        v1 = adj[idx]
        v2 = adj[idx + 1]
        graphs[v1][v2] = 1
        
    dfs1(0)
    if (visited[99] == True):
        print(f'#{tc} 1')
    else:
        print(f'#{tc} 0')