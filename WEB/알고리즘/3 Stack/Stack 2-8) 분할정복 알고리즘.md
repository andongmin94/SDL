### 분할 정복 알고리즘

#### 유래

* 1805년 12월 2일 아우스터리츠 전투에서 나폴레옹이 사용한 전략
* 전력이 우세한 연합군을 공격하기 위해 나폴레옹은 연합군의 중앙부로 쳐들어가 연합군을 둘로 나눔
* 둘로 나뉜 연합군을 한 부분씩 격파함

#### 설계 전략

* 분할 : 해결할 문제를 여러 개의 작은 부분으로 나눈다.
* 정복 : 나눈 작은 문제를 각각 해결한다.
* 통합 : 해결된 해답을 모은다.

#### 거듭 제곱

```python
def Power(Base, Exponent):
    if Base == 0:
        return 1
    result = 1  # Base^0은 1이므로
    for i in range(Exponent):
        result *= Base
    return result
```

```python
def Power(Base, Exponent):
    if Exponent == 0 or Base == 0:
        return 1

    if Exponent % 2 == 0:
        NewBase = Power(Base, Exponent / 2)
        return NewBase * NewBase
    else:
        NewBase = Power(Base, (Exponent - 1) / 2)
        return (NewBase * NewBase) * Base
```

```python
# 거듭제곱 구현
def f1(b, e):
    if b == 0:
        return 1
    r = 1
    for i in range(e):
        r *= b
    return r


def f2(b, e):
    if b == 0 or e == 0:
        return 1
    if e % 2:  # 홀수면
        r = f2(b, (e - 1) // 2)
        return r * r * b
    else:      # 짝수면
        r = f2(b, e // 2)
        return r * r
```