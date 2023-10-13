arr = list(map(int, input().split()))

i = 0
asc = 0
des = 0
while (i < 7):
    if arr[i] < arr[i+1]:
        asc += 1
    if arr[i] > arr[i+1]:
        des += 1
    i += 1

if asc == 7:
    print("ascending")
elif des == 7:
    print("descending")
else:
    print("mixed")