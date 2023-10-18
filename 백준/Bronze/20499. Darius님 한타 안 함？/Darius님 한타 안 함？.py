K, D, A = map(str, input().split('/'))
K = int(K)
D = int(D)
A = int(A)
if K + A < D or D == 0:
    print('hasu')
else:
    print('gosu')