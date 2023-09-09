N, M = map(int, input().split())
arrN = list(map(int, input().split()))
arrM = list(map(int, input().split()))
arrN.sort()
arrM.sort()
cntN = 1
cntM = 1
check_N = arrN[0];
check_M = arrM[0];
for i in range(N):
    if check_N + 100 <= arrN[i]:
        check_N = arrN[i]
        cntN += 1
for i in range(M):
    if check_M + 360 <= arrM[i]:
        check_M = arrM[i]
        cntM += 1
print(cntN, cntM)