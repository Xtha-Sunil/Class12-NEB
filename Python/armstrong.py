# Armstrong Numbers Examples
# 2-Digit Armstrong Numbers: 10, 89
# 3-Digit Armstrong Numbers: 153, 370, 371, 407
# 4-Digit Armstrong Numbers: 1634, 8208, 9474
# 5-Digit Armstrong Numbers: 54748

def is_armstrong_number(number):
    num = number
    armstrong_sum = 0
    num_digits = 0

    # Track num_digits   
    while num > 0:
        num_digits += 1     # Shortcut for num_digits = num_digits + 1
        num //= 10          # Shortcut for num = num // 10 (// means integer division)

    num = number  # Reset num to the original value

    while num > 0:
        digit = num % 10
        armstrong_sum += digit ** num_digits
        num //= 10

    return armstrong_sum == number

# User Input
number = int(input("Enter a number: "))

if is_armstrong_number(number):
    print(number, "is an Armstrong number")
else:
    print(number, "is not an Armstrong number")


