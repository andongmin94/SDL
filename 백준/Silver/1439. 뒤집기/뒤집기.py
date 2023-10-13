T = input()
cnt = 0
res = 0
for i in range(len(T)-1):
    if T[i] != T[i+1]:
        cnt += 1
        if cnt % 2 != 0:
            res += 1
print(res)