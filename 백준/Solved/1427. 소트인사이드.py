arr = list(map(int, input()))
arr.sort(reverse=True)
print(''.join(list(map(str, arr))))