'''
11, 45, 23, 81, 28, 34
11, 45, 22, 81, 23, 34, 99, 22, 17, 8
1, 1, 1, 1, 1, 0, 0, 0, 0, 0
'''

# quicksort
def quickSork(A, left, right):
    # 왼쪽 오른쪽 범위 나누어서 정렬... (pivot 중간값으로 해서 범위를 정복)
    if left < right:
        pivot_index = partition(A, left, right)
        quickSork(A, left, pivot_index-1)
        quickSork(A, pivot_index+1, right)


# 호어 partition 로직...
def partition(A, left, right):
    # 인덱스 i ->,   <- j 서로 교차할때까지 인덱스를 이동하고 스왑하는 과정을 진행...
    i = left
    j = right
    # pivot 값은 왼쪽, 또는 오른쪽이 좋다.
    pivot = A[i]
    while i <= j:
        while i <= j and A[i] <= pivot:
            i += 1
        while i <= j and A[j] >= pivot:
            j -= 1
        # 인덱스를 이동하고 스왑하는 과정을 진행...
        if i < j:
            # swap i <-> j
            A[i], A[j] = A[j], A[i]
            
    # 반복이 끝난 후에... 최종적으로 피봇을 중앙에 넣는다.
    # swap left <-> j
    A[left], A[j] = A[j], A[left]
    # 피봇 인덱스를 반환...
    return j


arr1 = [11, 45, 23, 81, 28, 34]
arr2 = [11, 45, 22, 81, 23, 34, 99, 22, 18, 8]
arr3 = [1, 1, 1, 1, 1, 0, 0, 0, 0, 0]

quickSork(arr1, 0, len(arr1)-1)
quickSork(arr2, 0, len(arr2)-1)
quickSork(arr3, 0, len(arr3)-1)



# def quickSork(A, left, right):
#     if left < right:
#         s = partition(A, left, right)
#         quickSork(A, left, s-1)
#         quickSork(A, s+1, right)
#
#
# def partition(A, left, right):
#     i = left
#     j = right
#     p = A[i]
#
#     while i <= j:
#         while i <= j and A[i] <= p:
#             i += 1
#         while i <= j and A[j] >= p:
#             j -= 1
#         if i < j:
#             A[i], A[j] = A[j], A[i]
#     A[left], A[j] = A[j], A[left]
#     return j
