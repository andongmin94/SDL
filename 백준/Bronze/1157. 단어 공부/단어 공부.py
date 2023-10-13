T = input()

a = T.lower()

counted = []
counted_num = []

for i in range(len(a)):
    if a[i] not in counted:
        counted.append(a[i])
        counted_num.append(a.count(a[i]))

b = max(counted_num)
c = counted[counted_num.index(b)].upper()
counted_num.sort(reverse=True)

if len(counted_num) != 1 and counted_num[0] == counted_num[1]:
    print('?')
else:
    print(c)