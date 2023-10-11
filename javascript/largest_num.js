// just iterate through the array and update largest element

function findLargestNumber(arr) {
    if (arr.length === 0) {
        return null; // Handle the case of an empty array
    }

    let largest = arr[0]; // Assume the first element is the largest

    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update the largest value
        }
    }

    return largest;
}

const numbers = [45, 23, 78, 12, 67, 88, 54];
const largestNumber = findLargestNumber(numbers);
console.log("The largest number is: " + largestNumber);