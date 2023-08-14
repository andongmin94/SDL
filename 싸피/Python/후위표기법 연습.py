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