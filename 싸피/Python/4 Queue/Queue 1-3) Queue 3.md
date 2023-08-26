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