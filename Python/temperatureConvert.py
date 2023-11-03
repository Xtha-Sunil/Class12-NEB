def fahrenheit_to_celsius(fahrenheit):
    celsius= (fahrenheit - 32) * 5/9
    return celsius

def celsius_to_fahrenheit(celsius):
    fahrenheit = (celsius - 9/5) +32
    return fahrenheit

def celsius_to_kelvin(celsius):
    kelvin = celsius + 273.15
    return kelvin

def kelvin_to_celsius(kelvin):
    celsius = kelvin - 273.15
    return celsius 

# Driver code:
while True:
    print("\nTemperature Converter Choices:\n")
    print("1. Fahrenheit to Celsius")
    print("2. Celsius to Fahrenheit")
    print("3. Celsius to Kelvin")
    print("4. Kelvin to Celsius")
    print("5. Exit")

    choice=input("Enter your choice (1/2/3/4/5): \n")

    if choice == 1:
        f = float(input("Enter temperature in Fahrenheit: "))
        c = fahrenheit_to_celsius(f)
        print(f"{f}°F is equal to {c:.2f}°C\n")

    elif choice == '2':
        c = float(input("Enter temperature in Celsius: "))
        f = celsius_to_fahrenheit(c)
        print(f"{c}°C is equal to {f:.2f}°F\n")

    elif choice == '3':
        c = float(input("Enter temperature in Celsius: "))
        k = celsius_to_kelvin(c)
        print(f"{c}°C is equal to {k:.2f} K\n")

    elif choice == '4':
        k = float(input("Enter temperature in Kelvin: "))
        c = kelvin_to_celsius(k)
        print(f"{k} K is equal to {c:.2f}°C\n")

    elif choice == '5':
        print("Exiting the program.")
        break
    
    else:
        print("Invalid choice. Please enter 1, 2, 3, 4, or 5.")

# Output:
# Temperature Converter Choices:

# 1. Fahrenheit to Celsius
# 2. Celsius to Fahrenheit
# 3. Celsius to Kelvin
# 4. Kelvin to Celsius
# 5. Exit
# Enter your choice (1/2/3/4/5):
# 2
# Enter temperature in Celsius: 36
# 36.0°C is equal to 66.20°F



