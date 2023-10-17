def fact(num):
    if num < 0:
        return 0

    elif num == 0 or num == 1:
        return 1

    else:
        fact = 1
        while(num > 1):
            fact *= num       # Alternative: fact = fact * num
            num -= 1          # Alterantive: num = num - 1
        return fact

# User Input
num = int(input("Enter a number: "))
result = fact(num)
print("The factorial of",num,"is :",result)
