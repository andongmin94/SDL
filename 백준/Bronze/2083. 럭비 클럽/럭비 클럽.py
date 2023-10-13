while(True):
    a, b, c = map(str, input().split())
    b = int(b)
    c = int(c)
    if (a == '#'):
        break
    print(a, end=' ')
    if (b > 17 or c >=80):
        print('Senior')
    else:
        print('Junior')