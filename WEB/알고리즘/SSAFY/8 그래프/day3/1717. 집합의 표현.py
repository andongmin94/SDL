import sys

def make_set(N): # 각 요소를 부모로 자기 자신을 초기화
    # 초기화를 진행한다... (각 요소를 자기자신으로 초기화)
    parent = [i for i in range(N + 1)]
    return parent

def find_set(x): # 요소 x에 대해서 대표자를 찾아서 반환
    # 자기 자신을 가리키는 노드라면 자신을 반환
    if x == parent[x]:
        return x
    else:
        parent[x] = find_set(parent[x])
        return parent[x]

def union(x, y): # 요소 x, y 속해있는 두 개의 그룹을 하나로 통합
    px = find_set(x)
    py = find_set(y)
    if px != py:
        parent[px] = py

n, m = map(int, sys.stdin.readline().split())
parent = make_set(n)
for i in range(m):
    arr = list(map(int, sys.stdin.readline().split()))
    if arr[0] == 0:
        union((arr[1]), (arr[2]))
    else:
        if arr[1] == arr[2]:
            print('YES')
            continue
        else:
            x = find_set(arr[1])
            y = find_set(arr[2])
            if x == y:
                ans = 'YES'
            else:
                ans = 'NO'
            print(ans)