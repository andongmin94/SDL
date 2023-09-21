T = int(input())
for tc in range(1, T+  1):
    V, E = list(map(int, input().split()))
    edges = []
    for i in range(E):
        n1, n2, w = map(int, input().split())
        edges.append([n1, n2, w])
    edges.sort(key=lambda x: x[2])
    parents = [i for i in range(V+1)]
 
    def find(x):
        if x == parents[x]:
            return x
        parents[x] = find(parents[x])
        return parents[x]
 

    def union(x, y):
        x = find(x)
        y = find(y)
 
        if x == y:
            return
 
        if x < y:
            parents[y] = x
        else:
            parents[x] = y
 

    cnt = 0
    total_sum = 0
    
    for n1, n2, w in edges:
        if find(n1) != find(n2):
            cnt += 1
            union(n1, n2)
            total_sum += w
            if cnt == V:
                break
            
    print(f'#{tc} {total_sum}')