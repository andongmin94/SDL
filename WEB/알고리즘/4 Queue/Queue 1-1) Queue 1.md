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