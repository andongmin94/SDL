T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    P = list(input())
    Key = input()

    for i in range(N):
        P[i] = int(P[i], 16)
    Key = int(Key, 16)

    for i in range(N):
        P[i] = P[i] ^ Key

    for i in range(N):
        if 10 <= P[i] <= 15:
            P[i] = chr(P[i] + 55)
        elif 0 <= P[i] <= 9:
            P[i] = chr(P[i] + 48)

    print(f'#{tc} {"".join(P)}')

# T = int(input())
# for tc in range(1, T + 1):
#     N = int(input())
#     P = list(input())
#     Key = input()
# 
#     if 65 <= ord(Key) <= 70:
#         Key = ord(Key) - 55
#     elif 48 <= ord(Key) <= 57:
#         Key = ord(Key) - 48
# 
#     for i in range(N):
#         if 65 <= ord(P[i]) <= 70:
#             P[i] = (ord(P[i]) - 55) ^ Key
#         elif 48 <= ord(P[i]) <= 57:
#             P[i] = (ord(P[i]) - 48) ^ Key
# 
#     for i in range(N):
#         if 10 <= P[i] <= 15:
#             P[i] = chr(P[i] + 55)
#         elif 0 <= P[i] <= 9:
#             P[i] = chr(P[i] + 48)
#     print(f'#{tc}', end=' ')
#     print(''.join(P))