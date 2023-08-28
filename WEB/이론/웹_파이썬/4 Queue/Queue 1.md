### 큐

#### 큐의 특성

* 스택과 마찬가지로 삽입과 삭제의 위치가 제한적인 자료구조
  : 큐의 뒤에서는 삽입만 하고, 큐의 앞에서는 삭제만 이루어지는 구조

* 선입선출구조
  : 큐에 삽입한 순서대로 원소가 저장되어, 가장 먼저 삽입된 원소는 가장 먼저 삭제된다.

#### 큐의 선입선출 구조

* 머리 front (저장된 원소 중 첫 번째 원소 또는 삭제된 위치)
* 꼬리 rear (저장된 원소 중 마지막 원소)

#### 큐의 기본 연산

* 삽입 : enQueue
* 삭제 : deQueue

#### 큐의 사용을 위해 필요한 주요 연산은 다음과 같습

* enQueue(item) : 큐의 뒤쪽에 원소를 삽입하는 연산
* deQueue() : 큐의 앞쪽에서 원소를 삭제하고 반환하는 연산
* createQueue() : 공백 상태의 큐를 생성하는 연산
* isEmpty() : 큐가 공백상태인지 확인하는 연산
* isFull() : 큐가 포화상태인지 확인하는 연산
* Qpeek() : 큐의 앞쪽에서 삭제없이 원소를 반환하는 연산

1. 공백 큐 생성 : createQueue();

```
Q = [0] * 100
front -1
rear -1
```

2. 원소 A 삽입 : enQueue(A);

```
rear += 1   # Q.append(A)
Q[rear] = A
```

3. 원소 B 삽입 : enQueue(B);

```
rear += 1   # Q.append(B)
Q[rear] = B
```

4. 원소 반환/삭제 : deQueue();

```
front += 1  # tmp = Q.pop(0)
tmp = Q[front]
```

5. 원소 C 삽입 : enQueue(C);

```
rear += 1   # Q.append(C)
Q[rear] = C
```

6. 원소 반환/삭제 : deQueue();
7. 원소 반환/삭제 : deQueue();

### 큐의 구현

#### 선형큐

* 1차원 배열을 이용한 큐
  : 큐의 크기 = 배열의 크기
  : front : 저장된 첫 번째 원소의 인덱스 (마지막으로 삭제된 위치)
  : rear : 저장된 마지막 원소의 인덱스

* 상태 표현
  : 초기 상태 : front = rear = -1
  : 공백 상태 : front = rear
  : 포화 상태 : rear == n-1 (n : 배열의 크기, n-1 : 배열의 마지막 인덱스)

#### 초기 공백 큐 생성

* 크기 n인 1차원 배열 생성
* front와 rear를 -1로 초기화

#### 삽입 : enQueue(item)

* 마지막 원소 뒤에 새로운 원소를 삽입하기 위해
  : rear 값을 하나 증가시켜 새로운 원소를 삽입할 자리를 마련
  : 그 인덱스에 해당하는 배열원소 Q[rear]에 item을 저장

```
def enQueue(item) :
     global rear
     if isFUll() : print("Queue_Full")
     else : 
        rear < - rear + 1
        Q[rear] <- item
```

```python
def enQ(data):
    global rear
    if rear == Qsize - 1:
        print('Q is FUll')
    else:
        rear += 1
        Q[rear] = data


Qsize = 3
Q = [0] * 3
rear = -1
front = -1

enQ(1)
enQ(2)
enQ(3)
enQ(4)
```

### 삭제 : deQueue

```python
def deQ():
    global front
    if front == rear:  # 비어있으면...
        print('큐가 비어있음')
        return -1
    else:
        front += 1
        return Q[front]


Qsize = 3
Q = [0] * 3
rear = -1
front = -1
# print(deQ())
# front += 1
# tmp = Q[front]
# print(tmp)
```

#### 공백상태 및 포화상태 검사 : isEmpty(), isFull()

* 공백상태: front == rear
* 포화상태 : rear == n-1 (n : 배열의 크기, n-1 : 배열의 마지막 인덱스)

```python
def isEmpty():
    return front == rear


def Full():
    return rear == len(Q) - 1
```

#### 검색 : Qpeek()

* 가장 앞에 있는 원소를 검색하여 반환하는 연산
* 현재 front의 한자리 뒤(front+1)에 있는 원소, 즉 큐의 첫번째에 있는 원소를 반환

```python
def Qpeek():
    if isEmpty():
        print("Queue_Empty")
    else:
        return Q[front + 1]
```

### 연습문제 1

```python
Q = []

Q.append(1) # enquque(1)
Q.append(2)
Q.append(3)
print(Q.pop(0))
print(Q.pop(0))
print(Q.pop(0))
```

### 선형 큐 이용시의 문제점
#### 잘못된 포화상태 인식

* 선형 큐를 이용하여 원소의 삽입삭제를 진행할 경우, 배열의 앞부분에 활용할 수 있는 공간이 있음에도 불구하고, rear = n - 1인 상태, 즉 포화상태로 인식하여 더 이상의 삽입을 수행하지 않게 됌.

#### 해결방법 1

* 매 연산이 이루어질 때마다 저장된 원소들을 배열의 앞부분으로 모두 이동시킴
* 원소 이동에 많은 시간이 소요되어 큐의 효율성이 급격히 떨어짐

#### 해결방법 2
* 1차원 배열을 사용하되, 논리적으로는 배열의 처음과 끝이 연결되어 원형형태의 큐를 이룬다고 가정하고 사용
* 원형 큐의 논리적 구조

### 원형 큐의 구조
#### 초기 공백 상태

* front = rear = 0

#### Index의 순환

* front와 rear의 위치가 배열의 마지막 인덱스인 n-1를 가리킨 후, 그 다음에는 논리적 순환을 이루어 배열의 처음 인덱스인 0으로 이동해야함
* 이를 위해 나머지 연산자 mod를 사용함

#### front 변수

* 공백 상태와 포화 상태 구분을 쉽게 하기 위해 front가 있는 자리는 사용하지 않고 항상 빈자리로 둠

#### 초기 공백 큐

#### 공백상태 및 포화상태 검사 : isEmpty(), is Full()

* 공백상태 : front == rear
* 포화상태 : 삽입할 rear의 다음 위치 == 현재 front

```python
# 원형 큐 구현
def enq(data):
    global rear
    if (rear + 1) % cQsize == front:
        # front = (front + 1) % cQsize <- 덮어쓰기임
        print('cQ is Full')
    else:
        rear = (rear + 1) % cQsize
        cQ[rear] = data

def deq():
    global front
    front = (front + 1) % cQsize
    return cQ[front]


cQsize = 4
cQ = [0] * cQsize
front = 0
rear = 0

enq(1)
enq(2)
enq(3)
print(deq())
print(deq())
enq(4)
```

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