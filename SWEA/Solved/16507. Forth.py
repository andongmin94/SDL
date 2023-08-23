T = int(input())

for tc in range(1, T + 1):
    N = list(map(str, input().split()))
    N.remove(N[-1])
    ans = ''
    stack = []
    for i in range(len(N)):
        if N[i] != '+' and N[i] != '-' and N[i] != '*' and N[i] != '/':
            stack.append(int(N[i]))
            continue
        if N[i] == '+':
            if len(stack) >= 2:
                b = stack.pop()
                a = stack.pop()
                stack.append(a + b)
            else:
                ans = 'error'
                break
        if N[i] == '-':
            if len(stack) >= 2:
                b = stack.pop()
                a = stack.pop()
                stack.append(a - b)
            else:
                ans = 'error'
                break
        if N[i] == '*':
            if len(stack) >= 2:
                b = stack.pop()
                a = stack.pop()
                stack.append(a * b)
            else:
                ans = 'error'
                break
        if N[i] == '/':
            if len(stack) >= 2:
                b = stack.pop()
                a = stack.pop()
                stack.append(a / b)
            else:
                ans = 'error'
                break

    if len(stack) == 1 and ans == '':
        print(f'#{tc} {int(stack[0])}')
    else:
        print(f'#{tc} error')