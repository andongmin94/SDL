dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
text = input()
time = 0

for i in range(len(text)):
    for j in dial:
        if text[i] in j:
            time += dial.index(j) + 3

print(time)