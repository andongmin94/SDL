def is_prime_number(x):
    # 2부터 (x - 1)까지의 모든 수를 확인하며
    for i in range(2, x):
        # x가 해당 수로 나누어떨어진다면
        if x % i == 0:
            return 0 # 소수 아님
    return 1
N = int(input())
arr = list(map(int, input().split()))
sosu = 0
for i in range(N):
    if is_prime_number(arr[i]) == 1 and arr[i] != 1:
        sosu += 1
print(sosu)