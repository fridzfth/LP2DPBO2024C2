<?php
require_once("Clothing.php");

// Derived class representing a shirt, inheriting from the Clothing class
class Shirt extends Clothing {
    private $color;    // shirt color
    private $sleeve;   // shirt sleeve type


    // Parameterized constructor
    public function __construct($id, $name, $brands, $price, $size, $material, $gender, $color, $sleeve) {
        // Initialize additional attributes with provided values
        parent::__construct($id, $name, $brands, $price, $size, $material, $gender); // Call the parent class constructor
        $this->color = $color;
        $this->sleeve = $sleeve;
        /* Alternatives if we don't use parent::__construct1($id, $name, $brands, $price, $size, $material, $gender) */
        // $this->set_id($id);
        // $this->set_name($name);
        // $this->set_brands($brands);
        // $this->set_price($price);
        // $this->set_material($material);
        // $this->set_size($size);
        // $this->set_gender($gender);
    }

    // Setter methods

    // Set the shirt color
    public function set_color($color) {
        $this->color = $color;
    }

    // Set the shirt sleeve type
    public function set_sleeve($sleeve) {
        $this->sleeve = $sleeve;
    }

    // Getter methods

    // Get the shirt color
    public function get_color() {
        return $this->color;
    }

    // Get the shirt sleeve type
    public function get_sleeve() {
        return $this->sleeve;
    }

    /// Method for displaying list data in a dynamic table
    public function displayList($shirt,$index) {
        echo '<tr>';
        echo '<td>' . ($index) . '</td>';
        echo '<td>' . $shirt->get_id() . '</td>';
        echo '<td>' . $shirt->get_name() . '</td>';
        echo '<td>' . $shirt->get_brands() . '</td>';
        echo '<td>Rp. ' . number_format($shirt->get_price(), 2) . '</td>';
        echo '<td>' . $shirt->get_size() . '</td>';
        echo '<td>' . $shirt->get_material() . '</td>';
        echo '<td>' . $shirt->get_gender() . '</td>';
        echo '<td>' . $shirt->color . '</td>';
        echo '<td>' . $shirt->sleeve . '</td>';
        echo '</tr>';
    }

    // Destructor
    public function __destruct() {
        // No specific cleanup needed in this case
    }
}
?>
