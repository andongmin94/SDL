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