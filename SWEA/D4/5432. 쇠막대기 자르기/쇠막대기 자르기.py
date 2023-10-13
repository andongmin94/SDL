# stack은 깔린 막대기의 갯수를 뜻함
# '('가 나오면 막대기가 깔렸으므로 stack에 append
# 괄호가 닫히면 막대기가 끝났거나 레이저이므로 stack에서 pop해서 1을 감소시킴
# pop할때마다 이전 괄호가 무엇인지 확인
# 이전 괄호가 '('이면 레이저이므로 stack의 길이만큼 cnt에 더해줌
# 이전 괄호가 ')'이면 막대기의 끝이므로 cnt에 1을 더해줌

T = int(input())

for tc in range(1, T+1):
    iron = input()
    stack = []
    cnt = 0
    for i in range(len(iron)):
        if iron[i] == '(':
            stack.append(iron[i])
        else:
            stack.pop()
            if iron[i-1] == '(':
                cnt += len(stack)
            else:
                cnt += 1
    print(f'#{tc} {cnt}')