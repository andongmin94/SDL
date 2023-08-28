N = int(input())
for i in range(1, N + 1):
    clap = str(i).count('3') + str(i).count('6') + str(i).count('9')
    if clap:
        print('-' * clap, end = ' ')
    else:
        print(i, end = ' ')