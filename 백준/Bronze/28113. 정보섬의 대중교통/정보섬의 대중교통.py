N, A, B = map(int, input().split())
if A < B and B >= N:
    print('Bus')
elif B < A and B >= N:
    print('Subway')
else:
    print('Anything')