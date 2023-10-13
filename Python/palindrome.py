def is_palindrome_number(number):
    num = abs(number)  # Take the absolute value of the input to handle -ve numbers
    palindrome_sum = 0

    while num > 0:
        digit = num % 10
        palindrome_sum = palindrome_sum * 10 + digit
        num //= 10
    # Compare with absolute value of the original number
    # returns True if palindrome_sum == abs(number) else False
    return palindrome_sum == abs(number)  

# User Input
number = int(input("Enter a number: "))

if is_palindrome_number(number):
    print(number, "is a palindrome number")
else:
    print(number, "is not a palindrome number")