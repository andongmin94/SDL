스택 1
* 스택
* 재귀호출
* Memoization
* DP
* DFS

스택의 특성
* 물건을 쌓아 올리듯 자료를 쌓아 올린 형태의 자료구조
* 스택에 저장된 자료는 선형 구조를 갖는다.
- 선형 구조: 자료 간의 관계가 1 대 1의 관계를 갖는다.
- 비선형 구조: 자료 간의 관계가 1 대 N의 관계를 갖는다. ex) 트리
* 스택에 자료를 삽입하거나 스택에서 자료를 꺼낼 수 있다.
* 마지막에 삽입한 자료를 가장 먼저 꺼낸다. (후입선출, LIFO(Last-In First-Out) 구조)
- 예를 들어 스택에 1, 2, 3 순으로 자료를 삽입한 후 꺼내면 역순으로 3, 2, 1이 된다.

스택의 구현
스택을 프로그램에서 구현하기 위해서 필요한 자료구조와 연산
* 자료구조 : 자료를 선형으로 저장할 저장소
- 배열을 사용할 수 있다.
- 저장소 자체를 스택이라 부르기도 한다.
- 스택에서 마지막에 삽입한 원소의 위치를 top이라 부른다.

* 연산
- 삽입 : 저장소에 자료를 저장한다. -> push
- 삭제 : 저장소에서 자료를 꺼낸다.꺼낸 자료는 삽입한 자료의 역순으로 꺼낸다. -> pop
- 스택이 공백인지 아닌지 확인한다. -> isEmpty
- 스택의 top에 있는 item을 반환한다. -> peek

스택의 push 알고리즘
* append 메소드를 통해 리스트의 마지막에 데이터를 삽입
def push(item):
    s.append(item)

def push(item, size):
    global top
    top += 1
    if top == size:
        print('overflow!')
    else:
        stack[top] = item

size = 10
stack = [0] * size
top = -1

push(10, size)
top += 1        # push(20)
stack[top] = 20
# 이게 사이즈는 10인데, 인덱스는 0~9까지니까
# top이 사이즈랑 같아진다는건 인덱스 범위를 넘었다는 거임.

스택의 pop 알고리즘
def pop():
    if len(s) == 0:
        # underflow
        return
    else:
        return s.pop()

def pop():
    global top
    if top == -1:
        print('underflow!')
        return 0
    else:
        top -= 1
        return stack[top + 1]
    # 반환 순서상 top을 먼저 1을 감소시켰기 때문에
    # 리턴값은 top에서 +1을 함.
print(pop())

if top > -1:    # pop()
    top -= 1
    return stack[top + 1]







