import sys
T = int(input())

stack = []
size = 0
for i in range(1, T + 1):
    order = sys.stdin.readline().rstrip()
    if order == 'pop':
        if stack:
            print(stack.pop())
            size -= 1
        else:
            print(-1)
    elif order == 'size':
        print(size)
    elif order == 'empty':
        if size == 0:
            print(1)
        else:
            print(0)
    elif order == 'top':
        if stack:
            print(stack[-1])
        else:
            print(-1)
    else:
        stack.append(int(order[5:]))
        size += 1
    if i == T:
        break