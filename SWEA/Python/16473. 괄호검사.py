T = int(input())
for tc in range(1, T+1):
    text = input().strip()
    stack = []
    
    for ch in text:
        if ch == '(' or ch == '{' or ch == '[':
            stack.append(ch)
        elif ch == ')':
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(ch)

        elif ch == '}':
            if stack and stack[-1] == '{':
                stack.pop()
            else:
                stack.append(ch)

        elif ch == ']':
            if stack and stack[-1] == '[':
                stack.pop()
            else:
                stack.append(ch)


    if len(stack) == 0:
        print(f'#{tc} 1')
    else:
        print(f'#{tc} 0')