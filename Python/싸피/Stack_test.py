# 빈 리스트
# stack = []

# push : 요소를 마지막에 삽입
def push(item):
    stack.append(item)
    
# pop : 마지막 요소를 꺼내는 연산
# pop을 시행했을 때 요소가 없다면?
# 에러가 발생하도록 로직 구성
def pop():
    if len(stack) == 0:
        return
    return stack.pop()

def peek():
    a = stack.pop()
    stack.append(a)
    return a
#   return stack[-1]

def isEmpty():
    if len(stack) == 0:
        return True
    else:
        return False

# 삽입(push) 3개
push(10)
push(20)
push(30)

# 삭제(pop) 3개

print(pop())
print(pop())
print(pop())
