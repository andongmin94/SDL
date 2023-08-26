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