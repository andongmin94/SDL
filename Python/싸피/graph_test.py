text = """
V E
v1 w1 v2 w2 ...
7 8 # 정점의 갯수
1 2 1 3 2 4 2 5 4 6 5 6 6 7 3 7 # 간선의 갯수
"""

# V : 정점의 갯수, E : 간선의 갯수
V, E = map(input().split()) # [ '7', '8' ] -> 7 8

# 정점사이의 연결 정보
adj = list((input().split())) # [1, 2, 1, 3, 2, 4, 2, 5, 4, 6, 5, 6, 6, 7, 3, 7]

# 인접행렬 초기화 (노드 - 노드 저장할 수 있는 V x V 이차원 배열)
graphs = [[0] * (V+1) for _ in range(V+1)]

# 인덱스로 순회...
for idx in range(0, len(adj), 2):
    u = adj[idx]
    v = adj[idx + 1]
    
    # 무방향 그래프이므로 양방향으로 저장
    # u -> v
    graphs[u][v] = 1
    # v -> u
    graphs[v][u] = 1
    
# 인접행렬 출력
print("인접행렬")
for i in range(len(graphs)):
    print(graphs[i])
    
# 인접리스트 초기화 (해당 정점 - 인접한 정점에 대한 리스트)
graphs = [[] for _ in range(V+1)]

# 인덱스로 순회...
for idx in range(0, len(adj), 2):
    u = adj[idx]
    v = adj[idx + 1]
    
    # 무방향 그래프이므로 양방향으로 저장
    # u -> v
    graphs[u].append(v)
    # v -> u
    graphs[v].append(u)

# 인접리스트 출력
for i in range(1, len(graphs)):
    print(i, ":", graphs[i])


visited = [False for _ in range(V+1)]
# 인접행렬 DFS
def dfs1(v):
    global visited
    print(v, "-", end='')
    visited[v] = True
    # v노드에서 갈 수 있는 노드를 확인 (인접한 노드)
    for u in range(len(graphs)):
        if graphs[v][u] == 1 and visited[u] == False:
            dfs1(u)

# 인접리스트 DFS
def dfs2(v):
    global visited
    print(v, "-", end='')
    visited[v] = True
    # v노드에서 갈 수 있는 노드를 확인 (인접한 노드)
    for u in graphs[v]:
        if visited[u] == False:
            dfs2(u)