<?php
    require_once("Shirt.php");


    // Instantiate Shirt object
    
    $shirt1 = new Shirt("201", "VNeckTee", "H&M", 65259.99, "XS", "Cotton", "Male", "White", "Short");
    $shirt2 = new Shirt("202", "Hoodie", "Zara", 643539.99, "L", "Fleece", "Female", "Grey", "Long");
    $shirt3 = new Shirt("203", "TankTop", "Forever21", 1547644.99, "M", "Cotton", "Male", "Black", "Sleeveless");
    $shirt4 = new Shirt("204", "Flannel", "Uniqlo", 345464.99, "XL", "Flannel", "Male", "Plaid", "Long");
    $shirt5 = new Shirt("205", "DenimShirt", "Levis", 493423441.99, "M", "Denim", "Female", "Blue", "Long");

    // Store Shirt objects in an array
    $shirts = [$shirt1, $shirt2, $shirt3, $shirt4, $shirt5];
    
    // Display header of the table
    echo "<center><h1>Here's Your Data</h1>";
        echo "<table border='1' cellpadding='5'>";
    echo '<thead>';
    echo '<tr>';
    echo '<th>N0</th>';
    echo '<th>ID</th>';
    echo '<th>Name</th>';
    echo '<th>Brands</th>';
    echo '<th>Price</th>';
    echo '<th>Size</th>';
    echo '<th>Material</th>';
    echo '<th>Gender</th>';
    echo '<th>Color</th>';
    echo '<th>Sleeve</th>';
    echo '</tr>';
    echo '</thead>';
    echo '<tbody></center>';

    $i = 1;
    // Loop to display Shirt data using the displayList method
    foreach ($shirts as $shirt) {
        $shirt->displayList($shirt, $i);
        $i++;
    }

    echo '</tbody>';
    echo '</table>';
?>