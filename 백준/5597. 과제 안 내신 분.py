A = [i for i in range(1, 31)]
for i in range(28):
    T = int(input())
    A.remove(T)
    
print(min(A))
print(max(A))