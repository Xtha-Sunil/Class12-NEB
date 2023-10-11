<?php
$arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]; // Example array

$sum = 0; // Initialize the sum

foreach ($arr as $num) {
    if ($num % 2 === 0) { // Check if the number is even
        $sum += $num; // Add the even number to the sum
    }
}

echo "The sum of even numbers in the array is: " . $sum . "\n";
?>
