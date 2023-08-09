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