t1, e1, f1 = map(int, input().split())
t2, e2, f2 = map(int, input().split())
sum_1 = t1 * 3 + e1 * 20 + f1 * 120
sum_2 = t2 * 3 + e2 * 20 + f2 * 120
if sum_1 > sum_2:
    print('Max')
elif sum_1 == sum_2:
    print('Draw')
else:
    print('Mel')