<?php
// Function to check if a number is prime
function isPrime($n) {
    if ($n <= 1) {
        return false;
    }
    for ($i = 2; $i * $i <= $n; $i++) {
        if ($n % $i === 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a specified range
function printPrimesInRange($start, $end) {
    for ($i = $start; $i <= $end; $i++) {
        if (isPrime($i)) {
            echo $i . " ";
        }
    }
}

// Define the range
$start = 1;
$end = 100;

// Print prime numbers in the specified range
echo "Prime numbers between $start and $end are:\n";
printPrimesInRange($start, $end);
?>
