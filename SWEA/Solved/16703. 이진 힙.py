'''
from heapq import heappop, heappush, heapify

T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = list(map(int, input().split()))
    heap = []
    for i in range(len(arr)):
        heappush(heap, arr[i])
    tree = [0]
    for i in range(len(heap)):
        tree.append(heap[i])
    grand_sum = 0
    grand = len(tree) - 1
    while grand > 0:
        grand //= 2
        grand_sum += tree[grand]
    print(f'#{tc} {grand_sum}')
'''
from heapq import heappush

T = int(input())
for tc in range(1, T + 1):
    # 입력
    # 노드의 개수 N
    N = int(input())
    # 노드들의 값
    nodes = list(map(int, input().split()))

    # 로직
    # 최소 힙에다가 N개의 노드들을 하나씩 삽입하여 힙을 완성시킨다...
    heap = [] # 힙으로 사용할 빈 리스트...
    for i in range(N):
        heappush(heap, nodes[i])
    heap = [0] + heap
    # 출력
    # 마지막 노드에서 루트 노드까지의 합을 출력한다.
    total = 0
    # 자식 인덱스 // 2 => 부모 인덱스
    p = len(heap) - 1
    while p > 0:
        p = p // 2 # 부모 노드로 이동한다
        total += heap[p] # 현재 노드의 값을 더해주고
    print(f'#{tc} {total}')