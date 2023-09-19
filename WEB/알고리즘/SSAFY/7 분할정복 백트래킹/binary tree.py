# 0. 이진 트리 저장
#   - 일차원 배열 저장
# 1. 연결 리스트로 저장
class TreeNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
    # 삽입 함수
    def inser(self, childNode):
        # 왼쪽 자식이 없을 경우
        if not self.left:
            self.left = childNode
            return
        if not self.right:
            self.right = childNode
            return
        return
    # 순회
    def preorder(self):
        # 아무것도 없는 트리를 조회할 때
        if self != None:
            # 전위 순회
            print(self.value, end=' ')

            if self.left:
                self.left.preorder()
            # 중위 순회
            # print(self.value, end=' ')

            if self.right:
                self.right.preorder()
            # 후위 순회
            # print(self.value, end=' ')

arr = [1,2,1,3,2,4,3,5,3,6]
# 이진 트리 만들기
nodes = [[] for _ in range(0,14)]
for i in range(0, len(arr), 2):
    parentNode = arr[i]
    childNode = arr[i+1]
    nodes[parentNode].append(childNode)

# 자식이 더 이상 없다는 걸 표현하기 위해 None을 삽입
for li in nodes:
    for _ in range(len(li), 2):
        li.append(None)


for i in range(len(nodes)):
    print(nodes[i])
# 2. 인접 리스트로 저장