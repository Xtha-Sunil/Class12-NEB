function bubbleSort(arr) {
    let n = arr.length;
    let temp;

    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

const arr = [64, 34, 25, 12, 22, 11, 90]; // Example array

console.log("Unsorted array: " + arr.join(", "));

bubbleSort(arr);

console.log("Sorted array in ascending order: " + arr.join(", "));
