# 아스키 // 확장 아스키 but 나라별 코드 코드체계로 인해 국가 간의 통신이 어려움

def itoa(i):
    res = ''
    if i < 0:
        s = '-'
        tmp = -i
    else:
        s = ''
        tmp = i

    while tmp != 0:
        res = chr(tmp % 10 + ord('0')) + res
        tmp //= 10

    return s + res

print(itoa(-1579) + '0') # -15790
print(itoa(1234) + '0') # 12340