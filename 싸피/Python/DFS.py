'''
V E
v1 w1 v2 w2 ...
7 8
1 2 1 3 2 4 2 5 4 6 5 6 6 7 3 7


def dfs(n, V, adj_m):
    stack = []
    visited = [0] * (V+1)
    visited[n] = 1
    print(n)
    while True:
        for w in range(1, V):
            if adj_m[n][w] == 1 and visited[w] == 0:
                stack.append(n)
                n = w
                visited[w] = 1
                print(n)
                break
        else:
            n = stack.pop()
'''

# N = 7
# stack = []
# visited = [False for _ in range(N)]
# graphs = [[1, 2], [0,3,4], [0,4], [1,5], [3,4,6], [1,2,5], [5]]
# graphs[0] # [1, 2] 1번과 2번 노드로 갈 수 있다.
# 
# def dfs(v):
#     global visited
#     print(v)
#     visited[v] = True
#     # v 노드에서 갈 수 있는 노드를 확인
#     for u in graphs[v]:
#         if visited[u] == True:
#             continue
#         dfs(u)
# 
# dfs(0)

N = 7
stack = []
visited = [False for _ in range(N)]
graphs = [[2, 3], [1, 4, 5], [1, 7], [2, 6], [2, 6], [4, 5, 7], [3, 6]]
graphs[0]

def dfs(v):
    global visited
    print(f'-{v}', end=' ')
    visited[v - 1] = True
    # v 노드에서 갈 수 있는 노드를 확인
    for u in graphs[v - 1]:
        if visited[u - 1] == True:
            continue
        dfs(u)


dfs(1)

# 인접 리스트 만들기