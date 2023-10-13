a = int(input())
b = str(a)
check = False
for i in range(len(b)):
    if b[i] == '7':
        check = True
        break
if check == True and a % 7 == 0:
    print('3')
elif check != True and a % 7 == 0:
    print('1')
elif check == True and a % 7 != 0:
    print('2')
else:
    print('0')