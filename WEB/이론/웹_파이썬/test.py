# 현강

# subset_test
# 부분집합 만들기
# 해당 원소를 사용하면 1, 해당 원소를 사용하지 않으면 0
# N : 배열의 길이, i : 재귀호출한 깊이
def subset(N, i, s):
    # 기저조건
    if i == N:
        if s == 0:
            print(*result)
        return

    # i 번째에 있는 요소를 사용
    # bits[i] = 1
    result.append(arr[i])
    subset(N, i + 1, s + arr[i])

    # i 번째에 있는 요소를 사용 x
    # bits[i] = 0
    result.pop()
    subset(N, i + 1, s)


arr = [-1,3,-9,6,7,-6,1,5,4,-2]
N = len(arr)
bits = [0] * N
s = 0
result = []
subset(N, 0, s)
