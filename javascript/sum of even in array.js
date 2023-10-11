const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]; // Example array

let sum = 0; // Initialize the sum

for (let i = 0; i < arr.length; i++) {
    if (arr[i] % 2 === 0) { // Check if the number is even
        sum += arr[i]; // Add the even number to the sum
    }
}

console.log("The sum of even numbers in the array is: " + sum);
