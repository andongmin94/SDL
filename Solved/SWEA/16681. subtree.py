'''
T = int(input())
for tc in range(1, T + 1):
    E, N = map(int, input().split())
    arr = list(map(int, input().split()))
    stack = []
    stack.append(N)
    i = 0
    while(i < len(stack)):
        for j in range(E * 2):
            if j % 2 == 0 and arr[j] == stack[i]:
                stack.append(arr[j + 1])
        i += 1

    print(f'#{tc} {len(stack)}')
'''
def preorder(tree, p):
    global cnt
    if p == 0:
        return
    # 카운트를 1 증가
    cnt += 1
    # 자기자신에 대한 탐색
    # 왼쪽 자식 탐색 진행
    preorder(tree, tree[p][0])
    # 오른쪽 자식 탐색 진행
    preorder(tree, tree[p][1])

T = int(input())

for tc in range(1, T + 1):
    E, N = map(int, input().split())
    nodes = list(map(int, input().split()))
    
    # 로직
    # 자식 노드를 표기할 수 있는 이차원 배열 tree.
    tree = [[0] * 2 for _ in range(E + 2)]
    for i in range(0, len(nodes), 2):
        # 부모 노드의 번호
        p = nodes[i]
        # 자식 노드의 번호
        c = nodes[i+1]
        # 부모 자식 관계를 부여...
        if tree[p][0] == 0:
            tree[p][0] = c # 왼쪽 자식
        else:
            tree[p][1] = c # 오른쪽 자식
    
    # N번 노드로 시작해서 순회를 하며, 서브트리 내에 있는 노드의 갯수를 카운트
    cnt = 0
    preorder(tree, N)
    # 출력
    print(f'#{tc} {cnt}')