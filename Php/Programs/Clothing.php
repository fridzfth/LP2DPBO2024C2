<?php
require_once("Product.php");

// Derived class representing a clothing product, inheriting from the Product base class
class Clothing extends Product {
    private $size;    // clothing size
    private $material; // clothing material
    private $gender;   // clothing gender

    // Parameterized constructor
    public function __construct($id, $name, $brands, $price, $size, $material, $gender) {
        // Initialize additional attributes with provided values
        parent::__construct($id, $name, $brands, $price); // Call the parent class constructor
        $this->gender = $gender;
        $this->material = $material;
        $this->size = $size;
        /* Alternatives if we don't use parent::__construct1($id, $name, $brands, $price) */
        /* 
        $this->set_id($id);
        $this->set_name($name);
        $this->set_brands($brands);
        $this->set_price($price);
        */
    }

    // Setter methods

    // Set the clothing size
    public function set_size($size) {
        $this->size = $size;
    }

    // Set the clothing material
    public function set_material($material) {
        $this->material = $material;
    }

    // Set the clothing gender
    public function set_gender($gender) {
        $this->gender = $gender;
    }

    // Getter methods

    // Get the clothing size
    public function get_size() {
        return $this->size;
    }

    // Get the clothing material
    public function get_material() {
        return $this->material;
    }

    // Get the clothing gender
    public function get_gender() {
        return $this->gender;
    }

    // Destructor
    public function __destruct() {
        // No specific cleanup needed in this case
    }
}
?>
