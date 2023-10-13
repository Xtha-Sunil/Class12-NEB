def is_palindrome_number(number):
    num=number
    palindrome_sum=0
    num_digits=0

    # Track num_digits
    while num>0:
        num_digits+=1       # Shortcut for num_digits = num_digits + 1
        num //= 10          # Shortcut for num = num // 10 (// means integer division)

    # Reset to original value
    num=number

    while num>0:
        digit=num%10
        palindrome_sum= palindrome_sum*10 + digit
        num//=10

    return palindrome_sum==number

# User Input
number = int(input("Enter a number: "))

if is_palindrome_number(number):
    print(number, "is a palindrome number")
else:
    print(number, "is not a palindrome number")


