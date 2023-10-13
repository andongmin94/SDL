arr = [list(map(str, input())) for _ in range(5)]

for i in range(5):
    if (len(arr[i]) != 15):
        for j in range(15-len(arr[i])):
            arr[i].append('')

for i in range(15):
    for j in range(5):
        print(arr[j][i], end = '')