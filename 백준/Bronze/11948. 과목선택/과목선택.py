a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
f = int(input())
g = [a,b,c,d]
h = [e,f]
g.sort(reverse=True)
h.sort(reverse=True)
print(g[0] + g[1] + g[2] + h[0])