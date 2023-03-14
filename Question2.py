num = int(input("Please enter a number between 3 and 9 (inclusive): "))
if num < 3 or num > 9:
    print("Invalid input! Please enter a number between 3 and 9.")
else:

    for i in range(1, num + 1):
        print("*" * i)
    for i in range(num - 1, 0, -1):
        print("*" * i)
