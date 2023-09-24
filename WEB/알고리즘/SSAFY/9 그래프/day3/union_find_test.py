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

# 노드 갯수
N = 10

parent = make_set(N)


union(1,2)
union(3,4)
union(2,4)
print(parent)

result = find_set(1)
print(result)