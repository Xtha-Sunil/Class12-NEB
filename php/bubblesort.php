<?php
function bubbleSort(&$arr) {
    $n = count($arr);
    $temp = 0;

    for ($i = 0; $i < $n - 1; $i++) {
        for ($j = 0; $j < $n - $i - 1; $j++) {
            if ($arr[$j] > $arr[$j + 1]) {
                // Swap arr[$j] and arr[$j + 1]
                $temp = $arr[$j];
                $arr[$j] = $arr[$j + 1];
                $arr[$j + 1] = $temp;
            }
        }
    }
}

$arr = [64, 34, 25, 12, 22, 11, 90]; // Example array

echo "Unsorted array: " . implode(", ", $arr) . "\n";

