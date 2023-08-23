'''
def inorder(p, N):
    global i
    if p <= N:
        inorder(p * 2, N)  # 왼쪽 자식으로 이동
        i += 1
        tree[p] = i
        inorder(p * 2 + 1, N)  # 오른쪽 자식으로 이동
        
T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    i = 0
    tree = [0] * (N + 1)  # N번 노드까지 있는 완전이진트리
    inorder(1, N)
    print(f'#{tc} {tree[1]} {tree[N//2]}')
'''
# 중위순회 코드
def inorder(tree, p):
    global cnt
    if p <= N:
        # L V R
        left = p * 2
        right = p * 2 + 1
        inorder(tree, left)
        # 자기자신에 대한 탐색... <--
        cnt += 1
        tree[p] = cnt
        inorder(tree, right)

T = int(input())
for tc in range(1, T + 1):
    # 노드의 갯수
    N = int(input())
    
    # 로직
    # 완전이진트리이면서, 이진탐색트리에 해당되는 노드 갯수가 N개인 트리를 만들어라.
    tree = [0] * (N + 1)
    # 이진탐색트리의 특징 중에 하나인 중위순회를 하였을 때 오름차순이 된다는 특징을 활용
    cnt = 0 # 카운트 변수
    inorder(tree, 1) # 중위순회를 하면서 오름차순으로 노드 값을 채워넣는다.
    
    # 출력
    # 루트 노드와 N // 2 번째 노드의 값을 출력해라.
    print(f'#{tc} {tree[1]} {tree[N//2]}')