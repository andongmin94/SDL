def fac_sum(n):
    if n <= 1:
        return 1
    return n + fac_sum(n-1)

def fac_sum2(n):
    if n <= 1:
        return 1
    return n**3 + fac_sum2(n-1)

N = int(input())
print(fac_sum(N))
print(fac_sum(N) * fac_sum(N))
print(fac_sum2(N))