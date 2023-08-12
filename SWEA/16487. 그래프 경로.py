def dfs1(v):
    global visited
    # print(v, end='-')
    visited[v] = True
    # v노드에서 갈 수 있는 노드를 확인 (인접한 노드)
    for u in range(len(graphs)):
        if graphs[v][u] == 1 and visited[u] == False:
            dfs1(u)

T = int(input())
for tc in range(1, T+1):
    V, E = map(int, input().split())
    graphs = [[0] * (V + 1) for _ in range(V + 1)]
    visited = [False for _ in range(V+1)]
    '''
    양 방향, 근데 이건 안 씀
    adj = []
    for _ in range(E):
        adj.extend(list(map(int, input().split())))
    for idx in range(0, len(adj), 2):
        u = adj[idx]
        v = adj[idx + 1]
        graphs[u][v] = 1
        graphs[v][u] = 1
    '''
    for _ in range(E):
        v1, v2 = map(int, input().split())
        graphs[v1][v2] = 1
    S, G = map(int, input().split())
    dfs1(S)
    if (visited[G] == True):
        print(f'#{tc} 1')
    else:
        print(f'#{tc} 0')