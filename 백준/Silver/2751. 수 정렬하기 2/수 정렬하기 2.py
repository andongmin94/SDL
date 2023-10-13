import sys
T = int(input())
arr = []
for i in range(T):
    arr.append(int(sys.stdin.readline().strip()))
arr.sort()
for j in range(len(arr)):
    print(arr[j])