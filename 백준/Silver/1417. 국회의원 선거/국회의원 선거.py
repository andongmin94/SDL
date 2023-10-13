T = int(input())
arr = []
cnt = 0
for i in range(T):
    arr.append(int(input()))
arr2 = arr[:]
arr2.pop(0)
arr2.sort(reverse=True)
while True:
    if len(arr) == 1:
        break
    if arr[0] <= arr2[0]:
        arr2[0] = arr2[0] - 1
        arr[0] = arr[0] + 1
        cnt += 1
        arr2.sort(reverse=True)
    else:
        break
print(cnt)
