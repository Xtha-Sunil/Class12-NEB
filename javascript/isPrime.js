function isPrime(number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime
    }

    if (number <= 3) {
        return true; // 2 and 3 are prime
    }

    if (number % 2 === 0 || number % 3 === 0) {
        return false; // Divisible by 2 or 3
    }

    for (let i = 5; i * i <= number; i += 6) {
        if (number % i === 0 || number % (i + 2) === 0) {
            return false; // Divisible by (6k +/- 1)
        }
    }

    return true;
}

// Example
const number = 29;
if (isPrime(number)) {
    console.log(number + " is a prime number");
} else {
    console.log(number + " is a composite number");
}