// Function to check if a number is prime
function isPrime(n) {
    if (n <= 1) {
        return false;
    }
    for (let i = 2; i * i <= n; i++) {
        if (n % i === 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a specified range
function printPrimesInRange(start, end) {
    for (let i = start; i <= end; i++) {
        if (isPrime(i)) {
            console.log(i);
        }
    }
}

// Define the range
const start = 1;
const end = 100;

// Print prime numbers in the specified range
console.log(`Prime numbers between ${start} and ${end} are:`);
printPrimesInRange(start, end);
