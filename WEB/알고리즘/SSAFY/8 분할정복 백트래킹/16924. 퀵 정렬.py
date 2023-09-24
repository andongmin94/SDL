def quick_sort(arr):
    if len(arr) <= 1:
        return arr
 
    # Divide
    pivot = arr[len(arr)//2]
    target = []
    left = []
    right = []
 
    for i in range(len(arr)):
        if arr[i] < pivot:
            left.append(arr[i])
        elif arr[i] > pivot:
            right.append(arr[i])
        else:
            target.append(arr[i])
 
    # Conquer
    left_sorted = quick_sort(left)
    right_sorted = quick_sort(right)
 
    # Combine
    return left_sorted + target + right_sorted
 
T = int(input())
for tc in range(1, T+1):
    N = int(input())
    num = list(map(int, input().split()))
 
    result = quick_sort(num)
    found = result[N//2]
 
    print(f'#{tc} {found}')