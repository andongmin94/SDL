a = list(map(int, input().split()))
check = 'F'
for i in range(8):
    if a[i] == 0 or a[i] == 1:
        check = 'S'
    else:
        check = 'F'
        break
print(check)