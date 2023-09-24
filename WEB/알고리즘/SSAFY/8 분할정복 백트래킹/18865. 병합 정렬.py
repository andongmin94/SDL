def merge_sort(arr):
    global cnt
    def merge(left, right):
        global cnt
        if left[-1] > right[-1]:
            cnt += 1
        result = []
        i = j = 0
 
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                result.append(left[i])
                i += 1
            else:
                result.append(right[j])
                j += 1
 
        result += left[i:]
        result += right[j:]
        return result
 
    if len(arr) == 1:
        return arr
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    return merge(left, right)
 
T = int(input())
for tc in range(1, T+1):
    N = int(input())
    L = list(map(int, input().split()))
 
    cnt = 0
    new_L = merge_sort(L)
    print(f'#{tc} {new_L[N//2]} {cnt}')