# 문자열(string)
### 문자열
### 패턴 매칭
### 문자열 암호화
### 문자열 압축

### 패턴 매칭

#### 패턴 매칭에 사용되는 알고리즘들
* 고지식한 패턴 검색 알고리즘
* 카프-라빈 알고리즘
* KMP 알고리즘
* 보이어-무어 알고리즘

#### 고지식한 알고리즘(Brute Force)
* 본문 문자열을 처음부터 끝까지 차례대로 순회하면서 패턴 내의 문자들을 일일이 비교하는 방식으로 동작
```
for i : 0 -> N-M
    for j : 0 -> M-1
```

#### 알고리즘 설명
```python
p = "is" # 찾을 패턴
t = "This is a book~!" # 전체 텍스트
M = len(p) # 찾을 패턴의 길이
N = len(t) # 전체 텍스트의 길이

def BruteForce(p, t):
    i = 0 # t의 인덱스
    j = 0 # p의 인덱스
    while j < M and i < N:
        if t[i] != p[j]:
            i = i - j
            j = -1
        i = i + 1
        j = j + 1
    if j == M : return i - M # 검색 성공
    else : return -1 # 검색 실패
```