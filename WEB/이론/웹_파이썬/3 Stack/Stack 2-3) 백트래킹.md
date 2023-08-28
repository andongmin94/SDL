#### 백트래킹

* 백트래킹(Backtracking) 기법은 해를 찾는 도중에 막히면 되돌아가서 다시 해를 찾아가는 기법이다.
* 백트래킹 기법은 최적화 문제와 결정 문제를 해결할 수 있다.
* 결정 문제 : 문제의 조건을 만족하는 해가 존재하는지의 여부를 Yes 또는 NO가 답하는 문제

1. 미로찾기

2. n-Queen

3. Map coloring

4. 부분 집합의 합 등

* 미로 찾기

1. push로 진행해가면서 미로를 탐색

2. 더 이상 진행할 수 없는 상황이 되면 pop을 하고 다른 방향으로 다시 탐색

3. 미로를 탐색하는 동안 지나온 길을 스택에 저장

* 백트래킹과 DFS의 차이

1. 백트래킹은 불필요한 경로를 조기에 차단

2. DFS는 모든 경로를 추적

3. 백트래킹은 가지치기(Pruning)라고도 함.

4. 깊이우선탐색을 가하기에는 경우의 수가 너무 많음. N! 가지의 경우의 수를 가진 문제에 대해 DFS를 가하면 시간이 너무 오래 걸림.

5. 백트래킹 알고리즘을 적용하면 일반적으로 경우의 수가 줄지만 이 역시 최악의 경우에는 여전히 지수함수 시간을 요하므로 처리 불가능한 문제는 처리 불가능

* 백트래킹이 모든 후보를 검사? NO

* 백트래킹 기법

1. 어떤 노드의 유망성을 점검한 후에 유망하지 않으면 그 노드의 부모로 되돌아가 다음 자식 노드로 감.

2. 어떤 노드를 방문하였을 때 그 노드를 포함한 경로가 해답이 될 수 없으면 그 노드는 유망하지 않다고 함, 반대로 해답의 가능성이 있으면 유망하다고 함.

3. 가지치기 : 유망하지 않는 노드가 포함되는 경로는 더이상 고려하지 않음.

* 백트래킹을 이용한 알고리즘은 다음과 같은 절차로 진행된다.

1. 상태 공간 트리의 깊이 우선 검색을 실시한다.

2. 각 노드가 유망한지를 점검한다.

3. 만일 그 노드가 유망하지 않으면, 그 노드의 부모 노드로 돌아가서 검색을 계속한다.

### 백트래킹의 구현

```python
def checknode(v) : # node
    if promising(v) :
        if there is a solution at v :
            write the solution
    else :
        for u in each child of v :
            checknode(u)
```

### 부분집합 구하기

* 어떤 집합의 공집합과 자기자신을 포함한 모든 부분집합을 powerset이라고 하며 구하고자 하는 어떤 집합의 원소 개수가 n개이면 부분집합의 개수는 2^n개가 된다.

* 백트래킹 기법으로 powerset을 구하는 알고리즘

  : 앞에서 설명한 일반적인 백트래킹 접근 방법을 이용한다

  : n개의 원소가 들어있는 집합의 2^n개의 부분집합을 만들기 위해서는 각각의 원소가 부분집합에 포함되거나 포함되지 않는 2가지 경우의 수가 있으므로, n개의 원소에 대해 각각의 경우의 수를 따져보면 된다

### powerser을 구하는 백트래킹 알고리즘

```python
def backtrack(a, k, input) :
global MAXCANDIDATES
c = [0] * MAXCANDIDATES

    if k == input :
        process_solution(a, k) # 답이면 원하는 작업을 한다
    else :
        k += 1
        ncandidates = construct_candidates(a, k, input, c)
        for i in range(ncandidates) :
            a[k] = c[i]
            backtrack(a, k, input)
```

### 백트래킹을 이용하여 순열구하기(계속)

```python
def construct_candidates(a, k, input, c) :
```

# 현강

### 후위표기법 연습

```python
text = input() # 중위식 표현식

stack = [] # 스택 생성

# 문자열을 하나하나씩 순회
for ch in text:
    # 1. 피연산자 (숫자) 4
    if ch.isdigit():
        # 숫자는 그대로 출력
        print(ch, end='')
    # 2. 여는 괄호 (     3 | 0
    # 가장 우선순위가 높기 때문에 바로 push
    # 추가적인 조건 검색 X
    if ch == '(':
        stack.append(ch)
    # 3. * / 연산       2
    elif ch in ['*', '/']:
        if len(stack) > 0 and stack[-1] in ['*', '/']:
            # 같은 우선순위를 가진 연산자이기에
            # 스택에서 빼내준다
            oper = stack.pop()
            print(oper, end='')
        # 스택에 연산자를 넣어준다
        stack.append(ch)
    # 4. + - 연산       1
    if ch in ['+', '-']:
        while len(stack) > 0 and stack[-1] in ['*', '/', '+', '-']:
            # 같은 우선순위를 가진 연산자이기에
            # 스택에서 빼내준다
            oper = stack.pop()
            print(oper, end='')
        # 스택에 연산자를 넣어준다
        stack.append(ch)
    # 5. 닫는 괄호 )    -1
    # 여는 괄호가 나올 때까지 스택에서 pop
    if ch == ')':
        while len(stack) > 0 and stack[-1] != '(':
            oper = stack.pop()
            print(oper, end='')
        # 여는 괄호를 스택에서 빼내준다
        stack.pop()
        
# 스택에 남아있는 연산자를 모두 pop
# 스택이 비어있지 않다면
while len(stack) > 0:
    oper = stack.pop()
    print(oper, end='')

print() # 후위식 표현식
```

### powerset_recur

```python
# 재귀함수로 부분집합 만들기
# bits : 해당 인덱스의 요소를 사용 할지 안할지 결정하는 비트 (1:o, 0:x)
# depth : 내가 얼마나 함수를 재귀호출했는지에 대한 카운트값

def recur(bits, depth):
    # 종료점에 해당하는 기저조건을 설정
    if depth == N:
        # print(bits)
        # 0을 보지 않기
        for i in range(N):
            if bits[i] == 1:
                print(arr[i], end=' ')
        print()
        return
    
    for i in range(2): # 0, 1
        bits[depth] = i
        # 자기 자신을 호출
        recur(bits, depth + 1)

N = 4
arr = [1, 2, 3, 4]
recur([0] * N, 0)
```

### powerset 연습문제 2번

```python
# 재귀함수로 부분집합 만들기

# bits : 해당 인덱스의 요소를 사용할지의 유무 (1:o, 0:x)
# depth : 내가 얼마나 함수를 재귀호출했는지에 대한 카운트값..
# current : 현재까지 부분 집합 요소들의 중간합
def recur(bits, depth, current):
    if current > 10:  # 가지치기
        return

    # 기저조건
    if depth == N:
        if current == 10:
            # 총합이 10이라면...
            # 부분집합을 출력하는 코드
            for i in range(N):
                if bits[i] == 1:
                    print(arr[i], end=' ')
            print()
        return

    for i in range(2):  # 0, 1
        bits[depth] = i
        # 자기 자신을 호출
        if bits[depth] == 1:
            recur(bits, depth + 1, current + arr[i])
        else:  # 0
            recur(bits, depth + 1, current)


arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
N = len(arr)
recur([0] * N, 0, 0)
```