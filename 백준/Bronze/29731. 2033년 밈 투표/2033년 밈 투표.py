n = int(input())
check = 0

for i in range(n):
    a = input()
    if a == 'Never gonna give you up' or a == 'Never gonna let you down' or a == 'Never gonna run around and desert you' or a == 'Never gonna make you cry' or a == 'Never gonna say goodbye' or a == 'Never gonna tell a lie and hurt you' or a == 'Never gonna stop':
        check += 1

if check == n:
    print('No')
else:
    print('Yes')