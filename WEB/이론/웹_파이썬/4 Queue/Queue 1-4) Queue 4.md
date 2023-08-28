### 우선순위 큐(Priority Queue)
#### 우선순위 큐의 특성

* 우선순위를 가진 항목들을 저장하는 큐
* FIFO 순서가 아니라 우선순위가 높은 순서대로 먼저 나가게 된다.

### 우선순위 큐의 적용 분야

* 시뮬레이션 시스템
* 네트워크 트래픽 제어
* 운영체제의 테스크 스케쥴링

### 우선순위 큐의 구현

* 배열을 이용한 우선순위 큐
* 리스트를 이용한 우선순위 큐

#### 우선순위 큐의 기본 연산

* 삽입
* 삭제

### 배열을 이용한 우선순위 큐
#### 배열을 이용한 우선순위 큐 구현

* 배열을 이용하여 자료 저장
* 원소를 삽입하는 과정에서 우선순위를 비교하여 적절한 위치에 삽입하는 구조

#### 문제점

### 큐의 활용 : 버퍼(Buffer)
#### 버퍼

* 데이터를 한 곳에서 다른 한 곳으로 전송하는 동안 일시적으로 그 데이터를 보관하는 메모리 영역
* 버퍼링 : 버퍼를 활용하는 방식 또는 버퍼를 채우는 동작을 의미한다.

#### 버퍼의 자료 구조

* 버퍼는 일반적으로 입출력 및 네트워크와 관련된 기능에서 이용된다.
* 순서대로 입력/출력/전달되어야 하므로 FIFO 방식의 자료구조인 큐가 활용된다.

### 덱

```python
from collections import deque

q = deque()
q.append(1)
q.append(2)
q.append(3)
print(q.popleft())
print(q.popleft())
print(q.popleft())
```

# 현강
### queue list test

```python
# 리스트를 사용해서 큐를 구현
# 큐... 선입선출(FIFO)
queue = []

# 요소를 추가하는 연산
def enQueue(item):
    queue.append(item)

# 요소를 삭제하는 연산
def deQueue():
    return queue.pop(0)

enQueue(1)
enQueue(2)
enQueue(3)
item = deQueue()
print(item)
item = deQueue()
print(item)
item = deQueue()
print(item)
```

### deque list test
```python
# 덱을 사용한 큐 생성
# deque(데크, Double End Queue)
from collections import deque

dq = deque()
# 인큐 1,2,3
dq.append(1)
dq.append(2)
dq.append(3)
# 디큐 1,2,3
item = dq.popleft()
print(item)
item = dq.popleft()
print(item)
item = dq.popleft()
print(item)

# 덱을 사용한 스택 생성
# 후입선출

# 스택
stack = deque()

# 스택에 요소를 삽입 push
stack.append(1)
stack.append(1)
stack.append(1)

# 스택에 요소를 삭제 pop
item = stack.pop()
print(item
item = stack.pop()
print(item)
item = stack.pop()
print(item)
```

```python
# 선형 큐
# 정적인 크기의 배열
QSIZE = 100
queue = [0] * 100

# 머리, 꼬리에 해당하는 인덱스 초기화
front = rear = -1

# 큐 삽입 연산 enQueue
# rear, 꼬리를 1 증가, 해당 위치에 요소를 삽입
def enQueue(item):
    global rear
    rear = rear + 1
    queue[rear] = item

# 큐 삭제 연산 deQueue
# front, 머리를 1 증가, 해당 위치 요소를 삭제
def deQueue():
    global front
    front = front + 1
    return queue[front]

# 부가 연산을 만들어야함.
# 큐가 차있는지
def isFUll():
    return rear == QSIZE - 1
# 큐가 비어있는지
def isEmpty():
    return front == rear
# 큐에 뽑을 원소의 값은 무엇인지
def Qpeek():
    return queue[front + 1]
```

```python
# 원형 큐
# 정적인 크기의 배열
QSIZE = 100
queue = [0] * 100

# 머리, 꼬리에 해당하는 인덱스 초기화
front = rear = 0

# 큐 삽입 연산 enQueue
# rear, 꼬리를 1 증가, 해당 위치에 요소를 삽입
def enQueue(item):
    global rear
    rear = (rear + 1) % QSIZE
    queue[rear] = item
  
# 큐 삭제 연산 deQueue
# front, 머리를 1 증가, 해당 위치 요소를 삭제
def deQueue():
    global front
    front = (front + 1) % QSIZE
    return queue[front]

# 부가 연산을 만들어야함.
# 큐가 차있는지
def isFUll():
    return front == (rear + 1) % QSIZE
# 큐가 비어있는지
def isEmpty():
    return front == rear
# 큐에 뽑을 원소의 값은 무엇인지
def Qpeek():
    return queue[(front + 1) % QSIZE]
```