### 순열
#### A[1,2,3]의 모든 원소를 사용한 순열
* 1,23,132,213,231,312,321
* 총 6가지 경우

```python
# 4881. 배열 최소합
def f(i, N):
    if i == N:
        print(A)
    else:
        for j in range(i, N): # 자신부터 오른쪽 끝까지
            A[i], A[j] = A[j], A[i]
            f(i+1, N)
            A[i], A[j] = A[j], A[i]


A = [1,2,3]
f(0, 3)
```