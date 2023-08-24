### 부분 집합의 합
* 집합 {1,2,3}의 원소에 대해 각 부분집합에서의 포함 여부를 트리로 표현

```python
f(i, N) # i : 현재 단계, N : 목표
    if i == N:
        return
    else:
        f(i+1, N)
```
```python
# 재귀 1
def f(i, N):
    if i == N:
        print(B)
        return
    else:
        B[i] = A[i]
        f(i+1,N)
        return

N = 3
A = [1,2,3]
B = [0] * N
f(0, N)
print(B)
```
```python
# 부분집합 재귀
def f(i, N):
    if i == N:
        print(bit, end = ' ')
        for j in range(N):
            if bit[j]:
                print(A[j], end = ' ')
        print()
        return
    else:
        bit[i] = 1
        f(i+1, N)
        bit[i] = 0
        f(i+1, N)
        return

A = [1,2,3]
bit = [0] * 3
f(0,3)
```










