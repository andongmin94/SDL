score = 0
score_base = 0
for i in range(20):
    A, B, C = map(str, input().split())
    B = float(B)
    if C != 'P':
        score_base += B
    if C == 'A+':
        score += 4.5 * B
    elif C == 'A0':
        score += 4.0 * B
    elif C == 'B+':
        score += 3.5 * B
    elif C == 'B0':
        score += 3.0 * B
    elif C == 'C+':
        score += 2.5 * B
    elif C == 'C0':
        score += 2.0 * B
    elif C == 'D+':
        score += 1.5 * B
    elif C == 'D0':
        score += 1.0 * B
    elif C == 'F':
        score += 0.0 * B
print(score / score_base)