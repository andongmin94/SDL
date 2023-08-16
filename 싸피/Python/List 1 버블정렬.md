﻿#### 정렬이란

* 2개 이상의 자료를 특정 기준에 의해 작은 값부터 큰 값, 혹은 그 반대로 재배열 하는 것.

#### 키

* 자료를 정렬하는 기준이 되는 특정 값

#### 대표적인 정렬 방식의 종류

* 버블 정렬(Bubble Sort)
* 카운팅 정렬(Counting Sort)
* 선택 정렬(Selection Sort)
* 퀵 정렬(Quick Sort)
* 삽입 정렬(Insertion Sort)
* 병합 정렬(Merge Sort)

#### 버블 정렬

* 인접한 두 개의 원소를 비교하며 자리를 계속 교환하는 방식

#### 정렬 과정

* 첫 번째 원소부터 인접한 원소끼리 계속 자리를 교환하면서 맨 마지막 자리까지 이동한다.
* 한 단계가 끝나면 가장 큰 원소가 마지막 자리로 정렬된다.(오름차순)
* 교환하며 자리를 이동하는 모습이 물 위에 올라오는 거품 모양과 같다고 하여 버블 정렬이라고 한다.

#### 시간복잡도

* O(n^2)

#### 배열을 활용한 버블 정렬

```
BubbleSort(a, N)
    for i : N-1 -> 1
        for j : 0 -> i-1
            if a[j] > a[j+1]
                a[j] <-> a[j+1]
```

```python
def BubbleSort(a, N):  # 정렬한 List, N 원소수
    for i in range(N - 1, 0, -1):  # 범위의 끝 위치
        for j in range(0, i):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
```

#### 연습문제

```python
# 1966. 숫자를 정렬하자
T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = list(map(int, input().split()))

    for i in range(N - 1, 0, -1):  # i는 구간의 마지막 인덱스
        for j in range(i):  # i - 1까지 가야하므로 i로 설정하면 됌.
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    print(f'#{tc}', *arr)
```

```python
# 1206. View
# 일정상 안 풀었음.
```







