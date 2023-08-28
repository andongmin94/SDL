### BFS(Breadth First Search)
#### 그래프를 탐색하는 방법에는 크게 두 가지가 있음.

* 깊이 우선 탐색
* 너비 우선 탐색

#### 너비우선 탐색은 탐색 시작점의 인접한 정점들을 먼저 모두 차례로 방문한 후에, 방문했던 정점을 시작점으로 다시 인접한 정점들을 차례로 방문함.

### 인접한 정점들에 대해 탐색을 한 후, 차례로 다시 너비우선탐색을 진행해야 하므로, 선입선출 형태의 자료구조인 큐를 활용함.

### BFS 알고리즘
#### 입력 파라미터 : 그래프 G와 탐색 시작점 v

```python
def BFS(G, v) : # 그래프 G, 탐색 시작점 v
    visited = [0] * (n+1) # n : 정점의 개수
    queue = []            # 큐 생성
    queue.append(v)       # 시작점 v를 큐에 삽입
    while queue :         # 큐가 비어있지 않은 경우
        t = queue.pop(0)  # 큐의 첫번째 원소 반환
        if not visited[t] : # 방문되지 않은 곳이라면
            visited[t] = True # 방문한 것으로 표시
            visit(t)          # 정점 t에서 할 일
            for i in G[t] :   # t와 연결된 모든 정점에 대해
                if not visited[i] : # 방문되지 않은 곳이라면
                queue.append(i)     # 큐에 넣기
```

### BFS 예제
#### 초기 상태

* Visited 배열 초기화
* Q 생성
* 시작점 enqueue

### 연습문제 3

```python
'''
7 8
2 4 1 2 1 3 2 5 4 6 5 6 6 7 3 7
'''

def bfs(s, V): # 시작정점 s, 마지막 정점 V
    visited = [0] * (V + 1) # visited 생성
    q = [] # 큐 생성
    q.append(s) # 시작점 인큐
    visited[s] = 1 # 시작점 방문 표시
    while q : # 큐에 정점이 남아있으면 front != rear
        t = q.pop(0) # 디큐
        print(t)     # 방문한 정점에서 할 일
        for w in adj_l[t]: # 인접한 정점 중 인큐되지 않은 정점 w가 있으면
            if visited[w] == 0:
                q.append(w)
                visited[w] = visited[t] + 1
        # w인큐, 인큐되었음을 표시
        
        
V, E = map(int, input().split()) # 1번부터 V번 정점, E개의 간선
arr= list(map(int, input().split()))
# 인접 리스트 ---
adj_l = [[] for _ in range(V+1)]
for i in range(E):
    v1, v2 = arr[i*2], arr[i*2+1]
    adj_l[v1].append(v2)
    adj_l[v2].append(v1)
```
### 연습문제 3_2

```python
'''
7 8
2 4 1 2 1 3 2 5 4 6 5 6 6 7 3 7
'''

def bfs(s, V): # 시작정점 s, 마지막 정점 V
    visited = [0] * (V + 1) # visited 생성
    q = [] # 큐 생성
    q.append(s) # 시작점 인큐
    visited[s] = 1 # 시작점 방문 표시
    while q : # 큐에 정점이 남아있으면 front != rear
        t = q.pop(0) # 디큐
        print(t)     # 방문한 정점에서 할 일
        for w in range(1, V+1): # 인접한 정점 중 인큐되지 않은 정점 w가 있으면
            if adj_m[t][w] == 1 and visited[w] == 0:
                q.append(w)
                visited[w] = visited[t] + 1
        # w인큐, 인큐되었음을 표시
        
        
V, E = map(int, input().split()) # 1번부터 V번 정점, E개의 간선
arr= list(map(int, input().split()))
# 인접 리스트 ---
adj_m = [[] for _ in range(V+1)]
for i in range(E):
    v1, v2 = arr[i*2], arr[i*2+1]
    adj_m[v1][v2].append(v2)
    adj_m[v2][v1].append(v1)
```

### 연습문제 미로의 거리

```python
def bfs(sti, stj, N):
    visited = [[0] * N for _ in range(N)] # visited 생성
    q = []    # 큐 생성
    q.append((sti, stj)) # 시작점 인큐
    visited[sti][stj] = 1    # 시작점 인큐 표시
    while q: # 큐가 비워질 때 까지
        i, j = q.pop(0) # 디큐
        if maze[i][j] == 3: # 처리
            return visited[i][j] - 2 # 지나온 칸 수 리턴
        # 인접하고 인큐된 적이 없으면
        # 인큐, 인큐 표시
        for di, dj in [[0, 1], [1, 0], [0, -1], [-1, 0]]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and maze[ni][nj] != 1 and visited[ni][nj]:
                q.append((ni, nj))
                visited[ni][nj] = visited[i][j] + 1
def find_start(N):
    for i in range(N):
        for j in range(N):
            if maze[i][j]:
                return i, j

T = int(input())

for tc in range(1, T + 1):
    N = int(input())
    maze = [list(map(int, input())) for _ in range(N)]

    sti, stj = find_start(N)
    ans = bfs(sti, stj, N)
    print(f'#{tc} {ans}')
```

# 현강

### 우선순위 큐(Priorty Queue)
#### 우선순위 큐의 특성

* 우선순위를 가진 항목들을 저장하는 큐
* FIFO 순서가 아니라 우선순위가 높은 순서대로 먼저 나가게 된다.

#### 우선순위 큐의 적용 분야

* 시뮬레이션 시스템
* 네트워크 트래픽 제어
* 운영체제의 테스크 스케줄링

#### 우선순위 큐의 구현

* 배열을 이용한 우선순위 큐
* 리스트를 이용한 우선순위 큐

#### 우선순위 큐의 기본 연산

* 삽입 : enQueue
* 삭제 : deQueue

### 배열을 이용한 우선순위 큐
#### 배욜을 이용하여 우선순위 큐 구현

* 배열을 이용하여 자료 저장
* 원소를 삽입하는 과정에서 우선순위를 비교하여 적절한 위치에 삽입
* 가장 앞에 취고 우선순위의 원소가 위치

#### 문제점

* 배열을 사용하므로, 삽입이나 삭제 연산이 일어날 때 원소의 재배치가 발생함.
* 이에 소요되는 시간이나 메모리 낭비가 큼.


#### heapq test

```python
from collections import deque

# 파이썬 컬렉션들은 클래스...
# -> 자료형. 메소드로 사용 O.
dq = deque()
dq.pop()

from random import randint

# 리스트를 하나 생성
heap = []
for i in range(10):
    heap.append(randint(1, 1000))
    
print(heap)

from heapq import heapify, heappop, heappush

# heap 자료구조에 맞게 변형
heapify(heap)

print(heap)
# heap에서 데이터를 뽑아낸다.
item = heappop(heap)
print(item)
item = heappop(heap)
print(item)
item = heappop(heap)
print(item)

heappush(1000)
```
### 큐의 활용 : 버퍼(Buffer)
#### 버퍼

* 데이터를 한 곳에서 다른 한 곳으로 전송하는 동안 일시적으로 그 데이터를 보관하는 메모리 영역
* 버퍼링 : 버퍼를 활용하는 방식 또는 버퍼를 채우는 동작을 의미한다.

#### 버퍼의 자료 구조
* 버퍼는 일반적으로 입출력 및 네트워크와 관련된 기능에서 이용된다.
* 순서대로 입력/출력/전달되어야 하므로 FIFO방식의 자료구조인 큐가 활용된다.

### BFS
#### 그래프를 탐색하는 방법에는 크게 두가지

* 깊이 우선 탐색
* 너비 우선 탐색

```python
'''
7 8
4 2 1 2 1 3 5  2 4 6 5 6 6 7 3 7
'''

def bfs(s, V) : # 시작정점 s, 마지막 정점 V
    visited = [0] * (V + 1) # visited 생성
    q = [] # 큐 생성
    q.append(s) # 시작점 인큐
    visited[s] = 1 # 시작점 방문 표시
    while q: # 큐에 정점이 남아있으면 front != rear
        t = q.pop(0)  # 디큐
        print(t) # 방문한 정점에서 할 일
        for w in adj_l[t]: # 인접한 정점 중 인큐되지 않은 정점 w가 있으면
            if visited[w] == 0:
                q.append(w) # w 인큐, 인큐되었음을 표시
                visited[w] = visited[t] + 1

V, E = map(int, input().split()) # 1번부터 V번 정점, E개의 간선
arr = list(map(int, input().split()))
# 인접 리스트 ---
adj_l == [[] for _ in range(V+1)]
for i in range(E):
    v1, v2 = arr[i*2], arr[i*2 + 1]
    adj_l[v1].append(v2)
    adj_l[v2].append(v1) # 방향이 없을 경우
# 여기까지 인접 리스트 --
bfs(1, 7)
```