# 고지식한 알고리즘 (Brute Force)
# 카프-라빈 알고리즘
# KMP 알고리즘
# 보이어-무어 알고리즘
#
# def BruteForce(p, t):
#     i = 0 # t의 인덱스
#     j = 0 # p의 인덱스
#     while j < M and i < N:
#         if t[i] != p[j]:
#             i = i - j
#             j = -1
#         i = i + 1
#         j = j + 1
#     if j == M: return i - M # 검색 성공
#     else: return -1 # 검색 실패

# 시저 암호