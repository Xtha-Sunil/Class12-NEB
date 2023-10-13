def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fibo_sequence = [0, 1]
        a, b = 0, 1
        for i in range(2, n):
            next_sum = a + b
            fibo_sequence.append(next_sum)  # Append the next Fibonacci number to the list
            a,b = b,next_sum
        return fibo_sequence

n = 10
result = fibonacci(n)
print(result)               #[0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
