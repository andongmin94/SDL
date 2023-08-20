### 부분 집합 합 문제
#### 유한 개의 정수로 이루어진 집합이 있을 때, 이 집합의 부분집합 중에서 그 집합의 원소를 모두 더한 값이 0이 되는 경우가 있는지를 알아내는 문제

#### 예를 들어, [-7, -3, -2, 5, 8]이라는 집합이 있을 때, [-3, -2, 5]는 이 집합의 부분집합이면서 그 합이 0이므로 이는 문제의 해가 된다.

#### 완전검색 기법으로 부분집합 합 문제를 풀기 위햐서는, 우선 집합의 모든 부분집합을 생성한 후에 각 부분집합의 합을 계산해야 한다.

#### 주어진 집합의 부분집하을 생성하는 방법에 대해서 생각해보자.

#### 부분집합의 수
* 집합의 원소가 n개일 때, 공집합을 포함한 부분집합의 수는 2^n개이다.
* 이는 각 원소를 부분집합에 포함시키거나 포함시키지 않는 2가지 경우를 모든 원소에 적용한 경우의 수와 같다.
* ex) {1,2,3,4} -> 2 x 2 x 2 x 2 = 16가지

#### 각 원소가 부분집합에 포함되었는지를 loop를 이용하여 확인하고 부분집합을 생성하는 방법
```
bit = [0,0,0,0]
for i in range(2):
    bit[0] = i
    for j in range(2):
        bit[i] = j
        for k in range(2):
            bit[2] = k
            for l in range(2):
                bit[3] = l
                print_subset(bit)
```

```python
def print_subset(bit, arr, n):
    total = 0
    for i in range(n):
        if bit[i]:
            print(arr[i], end = ' ')
            total += arr[i]
    print(bit, total)

arr = [1,2,3,4]
bit = [0,0,0,0]
for i in range(2):
    bit[0] = i
    for j in range(2):
        bit[i] = j
        for k in range(2):
            bit[2] = k
            for l in range(2):
                bit[3] = l
                print_subset(bit, arr, 4)
```