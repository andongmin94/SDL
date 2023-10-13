t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())
    if(a*b > c*d):
        print("TelecomParisTech")
    elif(a*b < c*d):
        print("Eurecom")
    else:
        print("Tie")