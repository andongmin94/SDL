i = 0
j = 'A'
k = 'B'
while (j != 0):
    j, *k = map(int, input().split())
    if (j == 0):
        break
    i += 1
    print(f'Case {i}: Sorting... done!')