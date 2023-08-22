#### step2. 후위표기법의 수식을 스택을 이용하여 계산

1. 피연산자를 만나면 스택에 push

2. 연산자를 만나면 필요한 만큼의 피연산자를 스택에서 pop하여 연산하고, 연산결과를 다시 스택에 push

3. 수식이 끝나면 마지막으로 스택을 pop하여 출력

```python
'''
6528-*2/+
'''

stack = [0] * 100
top = -1
susik = input()
for x in susik:
    if x not in '+-/*': # 피연산자면...
        top += 1        # push(x)
        stack[top] = int(x)
    else:
        op1 = stack[top]
        top -= 1
        op2 = stack[top]
        top -= 1
        if x == '+': # op2 + op1
            top += 1
            stack[top] = op2 + op1
        elif x == '-':
            top += 1
            stack[top] = op2 - op1
        elif x == '/':
            top += 1
            stack[top] = op2 / op1
        elif x == '*':
            top += 1
            stack[top] = op2 * op1
print(stack[top])
```