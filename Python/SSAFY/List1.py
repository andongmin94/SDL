# 시간 복잡도는 이르자면 빅-오 표기법
# 가장 큰 영향력을 주는 n에 대한 항만을 표시
# 계수는 생략함
# ex) O(2n+1) -> O(n) // O(4n^2 + 3n + 2) -> O(n^2) // O(4) -> O(1)
#
# 1차원 배열 선언
# Arr = list() // Arr = [] // Arr = [1, 2, 3, 4, 5] // Arr = [0] * 10
#
# 1차원 배열 접근
# Arr[0] = 10 // 배열 Arr의 0번 원소에 10을 저장
# Arr[idx] = 20 // 배열 Arr의 idx번 원소에 20을 저장
#
# 정렬 방식의 종류
# 버블 // 카운팅 // 선택 // 퀵 // 삽입 // 병합
#
# 버블 정렬(Bubble Sort)
# 인접한 두 원소를 검사하여 정렬하는 알고리즘
# 시간 복잡도 : O(n^2)
# def BubbleSort(a, N): # a : 배열, N : 배열의 크기
#     for i in range(N-1, 0, -1): # 배열의 맨 뒤부터 처음까지 역순으로 원소를 할당하여 순회함.
#         for j in range(0, i): # 처음부터 정렬되지 않은 배열의 마지막까지 순회함.
#             if a[j] > a[j+1]: # 현재 원소가 다음 원소보다 크다면,
#                 a[j], a[j+1] = a[j+1], a[j] # 두 원소를 교환함.
#
# 카운팅 정렬(Counting Sort)
# 각 원소가 몇 개인지 세어서 정렬하는 알고리즘
# 정수 혹은 정수로 표현할 수 있는 자료에만 적용할 수 있음.
# 시간 복잡도 : O(n+k) // n : 배열의 크기, k : 정수의 최대값
# def CountingSort(A, B, K): # A : 입력 배열, B : 정렬된 배열, K : 정수의 최대값
# C = [0] * (K+1) # 카운트 배열