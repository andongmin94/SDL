while True:
    T = input()
    if T == '0':
        break
    B = T[::-1]
    if T == B:
        print('yes')
    else:
        print('no')