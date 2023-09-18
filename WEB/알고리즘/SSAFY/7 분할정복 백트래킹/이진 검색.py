# 이진 검색 - 반복문

arr = [2,4,7,9,11,19,23]

# 문제에서 데이터가 정렬되어있다 라는 조건이 없다면
# 반드시 정렬을 먼저 수행해야한다.

arr.sort()

def binarySearch(target):
    low = 0
    high = len(arr) - 1

    # low > high 라면 데이터를 못 찾은 경우
    while low <= high:
        mid = (low + high) // 2

        # 1. 가운데 값이 정답인 경우
        if arr[mid] == target:
            return mid
        # 2. 가운데 값이 정답보다 작은 경우
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
            
    return "해당 데이터는 없습니다"

print(f'9 = index({binarySearch(2)})')