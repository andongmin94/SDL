def fac_count(n):
    if n <= 1:
        return 1
    return n * fac_count(n-1)

N = int(input())
A = str(fac_count(N))
A = A[::-1]
cnt = 0
for i in range(len(A)):
    if A[i] != '0':
        break
    else:
        cnt += 1
print(cnt)