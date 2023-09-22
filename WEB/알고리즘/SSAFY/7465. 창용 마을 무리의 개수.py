T = int(input())
 
def find(parent,x):
    if x != parent[x]:
        return find(parent,parent[x])
    return parent[x]
 
def union(parent,a,b):
     
    a = find(parent,a)
    b = find(parent,b)
     
     
    if a<b:
        parent[b] = a
    else:
        parent[a] = b
 
for tc in range(1,T+1):
    n,m = map(int,input().split())
    parent = [i for i in range(n+1)] 
    for _ in range(m):
        a,b = map(int,input().split())
        union(parent,a,b)
 
    for i in range(n+1):
        parent[i] = find(parent,i)
 
    parent = parent[1:]
    ans = len(set(parent))
 
    print(f"#{tc} {ans}")