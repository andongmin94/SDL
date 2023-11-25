a = int(input())
b = int(input())
c = b - a

if 1 <= c <= 20:
    print("You are speeding and your fine is $100.")
elif 21 <= c <= 30:
    print("You are speeding and your fine is $270.")
elif 31 <= c:
    print("You are speeding and your fine is $500.")
else:
    print("Congratulations, you are within the speed limit!")