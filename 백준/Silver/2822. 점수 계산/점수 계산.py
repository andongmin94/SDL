arr = [0]
arr_idx = []
sum_arr = 0
for i in range(8):
    arr.append(int(input()))

arr_idx.append(arr.index(max(arr)))
arr.insert(arr.index(max(arr)), 0)
sum_arr += arr.pop(arr.index(max(arr)))
arr_idx.append(arr.index(max(arr)))
arr.insert(arr.index(max(arr)), 0)
sum_arr += arr.pop(arr.index(max(arr)))
arr_idx.append(arr.index(max(arr)))
arr.insert(arr.index(max(arr)), 0)
sum_arr += arr.pop(arr.index(max(arr)))
arr_idx.append(arr.index(max(arr)))
arr.insert(arr.index(max(arr)), 0)
sum_arr += arr.pop(arr.index(max(arr)))
arr_idx.append(arr.index(max(arr)))
arr.insert(arr.index(max(arr)), 0)
sum_arr += arr.pop(arr.index(max(arr)))
arr_idx.sort()

print(sum_arr)
print(*arr_idx)