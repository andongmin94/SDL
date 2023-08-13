T = int(input())

paper = [0 for _ in range(31)]
# 종이 가로가 10일 때 나오는 조합
paper[1] = 1
# 종이 가로가 20일 때 나오는 조합
paper[2] = 3

for i in range(3, 31):
    # 영역이 1개로 나눠지는 경우 + 영역이 2개로 나눠지는 경우
    paper[i] = paper[i-1] + 2 * paper[i-2]

for tc in range(1, T+1):
    N = int(input())
    N = N // 10
    print(f'#{tc} {paper[N]}')