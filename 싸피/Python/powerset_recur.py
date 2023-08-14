# 재귀함수로 부분집합 만들기

# bits : 해당 인덱스의 요소를 사용 할지 안할지 결정하는 비트 (1:o, 0:x)
# depth : 내가 얼마나 함수를 재귀호출했는지에 대한 카운트값

def recur(bits, depth):
    # 종료점에 해당하는 기저조건을 설정
    if depth == N:
        # print(bits)
        # 0을 보지 않기
        for i in range(N):
            if bits[i] == 1:
                print(arr[i], end=' ')
        print()
        return
    
    for i in range(2): # 0, 1
        bits[depth] = i
        # 자기 자신을 호출
        recur(bits, depth + 1)

N = 4
arr = [1, 2, 3, 4]
recur([0] * N, 0)
