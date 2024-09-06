<?php 
    $length = (Int)readLine('Enter length: ');
    $width = (Int)readLine('Enter width: ');

    $area = $length * $width;
    $perim = 2 * $length + 2 * $width;
    echo "The area is: " . $area;
    echo "The perimeter is: " . $perim
?>
