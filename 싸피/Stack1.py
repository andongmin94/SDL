# push 알고리즘
def push(item, size):
    global top
    top += 1
    if top == size:
        print('Stack Overflow')
    else:
        stack[top] = item

size = 10
stack = [0] * size
top = -1

push(10, size)
top += 1
stack[top] = 20

# pop 알고리즘
def pop():
    if len(s) == 0 :
        print('Stack Underflow')
        return
    else:
        return s.pop()
    
def pop():
    global top
    if top == -1:
        print('Stack Underflow')
        return
    else:
        top -= 1
        return stack[top+1]
    
print(pop())

if top > -1:
    top -= 1
    print(stack[top+1])
    
# 구현 실습 push
stack = [0] * 10
top = -1

top += 1
stack[top] = 1
top += 1
stack[top] = 2
top += 1
stack[top] = 3

# 구현 실습 pop
print(stack[top])
top -= 1
top -= 1
print(stack[top+1])
# 피보나치
memo = [0] * 1001
def fibo1(n):
    global memo
    # 기저조건
    if n > 2:
        return n
    if memo[n] != 0:
        return memo[n]

    memo[n] = fibo1(n - 1) + fibo1(n - 2)
    return memo[n]

def fibo2(n):
    f = [0] * (n + 1)
    f[0] = 0
    f[1] = 1
    for i in range(2, n + 1):

# DP (Dynamic Programming)

def fibo(n):
    global cnt
    cnt += 1
    if n < 2:
        return memo[n]
    else:
        if memo[n] == 0:
            memo[n] = fibo(n - 1) + fibo(n - 2)
        return memo[n]
    

def fibo(n):
    dp = [0] * (n + 1)
    dp[0] = 0
    dp[1] = 1
    for i in range(2, n+1):
        dp[i] = dp[i-1] + dp[i-2]
    return dp[n]

dp = [0] * (100 + 1)
dp[0] = 0
dp[1] = 1
for i in range(2, 101):
    dp[i] = dp[i-1] + dp[i-2]
print(fibo(100))

# DFS

visited[], stack[] 초기화
DFS(v)
    시작점 v 방문;
    visited[v] = true;
    while
    {
     if (v의 인접 정점 중 방문 안 한 정점 w가 있으면)
    push(v);
    v = w (w에 방문)
    visited[w] = true;
     else
        if (스택이 비어있지 않으면)
        v = pop(stack);
        else
        break;
    }