T = int(input())
for tc in range(1, T + 1):
    bin = input()
    tri = list(input())
    bin_set = set()
    tri_set = set()
    for i in range(len(bin)):
        bin_set.add(int(bin, 2) ^ 2 ** i)
    for i in range(len(tri)):
        for j in {'0', '1', '2'} - {tri[i]}:
            tmp = tri[:]
            tmp[i] = j
            tri_set.add(int(''.join(tmp), 3))
    print(f'#{tc}', *(bin_set & tri_set))
