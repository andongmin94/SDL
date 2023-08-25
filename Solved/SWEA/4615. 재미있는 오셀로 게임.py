﻿def f(i, j, bw, N):
    board[i][j] = bw # 주어진 돌 놓기
    for di, dj in [[0,1],[1,1],[1,0][1,-1],[0,-1],[-1,-1],[-1,0],[-1,1]]:
        ni, nj = i + di, j + dj
        tmp = []
        op = []
        while 0 <= ni < N and 0 <= nj < N and board[ni][nj] == op[bw]: # 보드 내부가 반대색이면 계속 이동
            tmp.append((ni,nj))
           
        if 0 <= ni < N and 0 <= nj < N and board[ni][nj] == bw : # 보드 내부이고 같은색이면
            ni, nj = ni+di, nj+dj
B = 1 # 흑돌 1
W = 2 # 백돌 2

T = int(input())

for tc in range(1, T + 1):
    N, M = map(int, input().split()) # N 보드 크기, M 돌을 놓는 횟수
    play = [list(map(int,input().split())) for _ in range(M)]
    board = [[0] * N for _ in range(N)]
    # 중심부 4개의 돌 배지,
    board[N//2-1][N//2-1] = W
    board[N//2-1][N//2] = B
    board[N//2][N//2-1] = B
    board[N//2][N//2] = W
    for col, row, bw in play: # 입력이 col, row, color, col, row는 인덱스 1 기준
        f(row-1, col-1, bw, N)
    bcnt = wcnt = 0
    for i in range(N):
        for j in range(N):
            if board[i][j] == B:
                bcnt += 1
            elif board[i][j] == W:
                wcnt += 1
    print(f'#{tc} {bcnt} {wcnt}')