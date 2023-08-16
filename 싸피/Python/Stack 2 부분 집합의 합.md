### 집합 {1,2,3}의 원소에 대해 각 부분 집합에서의 포함 여부를 트리로 표현

```python
f(i, N)  # i : 현재 단계, N : 목표
if i == N:
    return
else:
    f(i + 1, N)
```

```python
def f(1, N):
    if i == N:
        return
    else:
        B[i] = A[i]
        f(i + 1, N)


N = 3
A = [1, 2, 3]
B = [0] * N
f(0, N)
print(B)
```

### 부분집합 재귀

```python
def f(i, N):
    if i == N:
        print(bit, end=' ')
        for j in range(N):
            if bit[j]:
                print(A[j], end=' ')
        print()
        return
    else:
        bit[i] = 1
        f(i + 1, N)
        bit[i] = 0
        f(i + 1, N)
        return


A = [1, 2, 3]
bit = [0] * 3
f(0, 3)
```

### 부분집합의 합, 재귀

* i 원소의 포함 여부를 결정하면 i까지의 부분 집합의 합 Si를 결정할 수 있음
* Si-1이 찾고자 하는 부분 집합의 합보다 크면 남은 원소를 고려할 필요가 없음

```python
def f(i, N):
    if i == N:
        print(bit, end=' ')
        s = 0
        for j in range(N):
            if bit[j]:
                s += A[j]
                print(A[j], end=' ')
        print(s)
        return
    else:
        bit[i] = 1
        f(i + 1, N)
        bit[i] = 0
        f(i + 1, N)
        return


A = [1, 2, 3]
bit = [0] * 3
f(0, 3)
```

### 부분집합의 합, 재귀2

```python
def f(i, N, s):  # s : i - 1 원소까지 부분 집합의 합(포함된 원소의 합)
    if i == N:
        print(bit, end=' ')
        print(s)
        return
    else:
        bit[i] = 1  # 부분집합에 A[i] 포함
        f(i + 1, N, s + A[i])
        bit[i] = 0  # 부분집합에 A[i] 미포함
        f(i + 1, N, s)
        return


A = [1, 2, 3]
bit = [0] * 3
f(0, 3)
```

### 부분집합의 합, 연습문제

```python
def f(i, N, s, t):  # s : i - 1 원소까지 부분 집합의 합(포함된 원소의 합)
    global cnt
    cnt = 0
    if s == t:
        print(bit)
        return
    elif i == N
        return
    elif s > t
        return
    else:
        bit[i] = 1  # 부분집합에 A[i] 포함
        f(i + 1, N, s + A[i])
        bit[i] = 0  # 부분집합에 A[i] 미포함
        f(i + 1, N, s)
        return


# 1부터 10까지 원소인 집합, 부분집합의 합이 10인 경우는?
N = 10
A = [i for i in range(i, N + 1)]
bit = [0] * N
f(0, N, 0, t)
```

A[i] 원소를 부분 집합의 원소로 고려하는 재귀 함수 (A는 서로 다른 자연수의 집합)

* 추가 고려 사항 : 남은 원소의 합을 다 더해도 찾는 값 미만인 경우 중단

### 순열

* A[1, 2, 3]의 모든 원소를 사용한 순열
* 123, 132, 213, 231, 312, 321
* 총 6가지 경우임

### 순열 1

```python
def f(1, N):
    if i == N:
        print(A)
    else:
        for j in range(i, N):  # 자신부터 오른쪽 끝까지
            A[i], A[j] = A[j], A[i]
            f(i + 1, N)
            A[i], A[j] = A[j], A[i]


A = [1, 2, 3]
f(0, 3)
```

### 분할 정복 알고리즘

#### 유래

* 나폴레옹이 사용함

#### 설계 전략

* 분할(Divde) : 해결할 문제를 여러 개의 작은 부분으로 나눈다.
* 정복(Conquer) : 나눈 작은 문제를 각각 해결한다.
* 통합(Combine) : (필요하다면) 해결된 해답을 모은다.

### 분할정복 예제

#### 거듭 제곱(Expnentiation)

* O(n)

def Power(Base, Exponenet) :
if Exponent == 0 or Base == 0 :
return 1

    if Exponent % 2 == 0:
        NewBase = Power(Base, Exponent / 2)
        return NewBase * NewBase
    else :
        NewBase = Power(Base, (Exponent-1)/2)
        return (NewBase * NewBase) * Base

```python
def f1(b, e):
    global cnt1

    if b == 0:
        return 1
    r = 1
    for i in range(e):
        r *= b
        cnt1 += 1
    return r


def f2(b, e):
    global cnt2
    if b == 0 or e == 0:
        return 1
    if e % 2:  # 홀수면
        r = f2(b, (e - 1) // 2)
        cnt2 += 1
        return r * r * b
    else:  # 짝수면
        r = f2(b, e // 2)
        cnt2 += 1
        return r * r


cnt1 = 0
cnt2 = 0
print(f1(2, 10), cnt1)
print(f2(2, 10), cnt2)
```

### 퀵 정렬

#### 주어진 배열을 두 개로 분할하고, 각각을 정렬한다.

* 합병정렬과 동일?

#### 다른점 1: 합병 정렬은 ~~

# 현강

#### permutation_test

```python
P = [1, 2, 3]


# 재귀적으로 요소값을 교환을 하면서
# 만들 수 있는 순서를 만들어본다.
# i : 깊이 (재귀를 얼마나 호출했는가)
# N : 순열을 만들 리스트의 크기
def f(i, N):
    # 기저 조건
    if i == N:  # 순열 완성
        print(P)
        return
    for j in range(i, N):
        # 교환(결정)
        P[i], P[j] = P[j], P[i]
        f(i + 1, N)
        # 복구
        P[i], P[j] = P[j], P[i]


f(0, len(P))
```

#### subset_test

```python
# 부분 집합의 합 만드는 코드
A = [1, 2, 3, 4]

# 무식하게 작성...
# 중첩된 포문으로 작성이 가능
bits = [0, 0, 0, 0]

# 포문으로 해당 인덱스의 비트를 0 또는 1로 바꿔주는 과정을 진행한다.
for i in [0, 1]:
    bits[0] = i
    for j in [0, 1]:
        bits[1] = j
        for k in [0, 1]:
            bits[2] = k
            for l in [0, 1]:
                bits[3] = l
                print(bits)
                subset = []
                for m in range(len(bits)):
                # 해당되는 비트가 1일 때에는
                # 부분 집합에 해당 요소를 추가하고
                if bits[m] == 1:
                    subset.append(A[m])
```

```python
# 재귀함수로 부분집합 코드
# i : 해당 인덱스에 대해서 값을 변경할 수 있도록 매개변수...
A = [1, 2, 3, 4]
bits = [0, 0, 0, 0]


def recur(i, t):
    # 기저조건
    if i == len(bits):
        print(bits)
        subset = []
        for j in range(len(bits)):
            # bits 값이 1이라면 해당요소를 추가함
            if bits[j] == 1:
                subset.append(A[j])
        if sum(subset) == t:
            print(subset)
        return
    for j in [0, 1]:
        bits[i] = j
        recur(i + 1)
# 라이브에선 포문을 풀어서 구성함.
```

```python
# 재귀로 작성했을 때
# 백트래킹 : DFS + 가지치기
# s : 현재까지 부분집합의 합
A = [1, 2, 3, 4]
bits = [0, 0, 0, 0]
s = []


def recur(i, s, t):
    # 구하는 부분집합
    # 현재까지 부분집합의 합이 t를 넘어가는 경우에는 가지치기
    if s == t:
        print(bits)
        return
    # 기저조건
    elif i == len(bits):
        return
    # subset이 t보다 커짐 <- 이게 완탐 안하고 가지치기하는 로직인듯
    elif s > t:
        return
    for j in [0, 1]:
        bits[i] = j
        recur(i + 1, s)
# 라이브에선 포문을 풀어서 구성함.
```

#### 분할정복 알고리즘

#### power_test

```python
# 반복문을 사용해서
# x값을 n번 곱하는 연산...
x = 3
n = 10


# 시간복잡도는 0(n)
def power1(x, n):
    tmp = 1
    for _ in range(n):
        tmp *= x
        return tmp


print(power1(2, 10))


# 재귀함수 (분할정복)
def power2(x, n):
    # 기저조건
    if x == 0 or n == 0:
        return 1
    # 지수가 짝수라면...
    if n % 2 == 0:
        x = x * x
        n = n // 2
        power2(x, n)
    # 지수가 홀수라면
    else:
        tmp = power2(x, n // 2)
        return tmp * tmp * x
```

### 퀵 정렬