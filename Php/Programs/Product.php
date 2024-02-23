<?php
/* Saya Mohammad Faridz Fathin [2202680] mengerjakan LP2 dalam mata kuliah DPBO untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

// Base class representing a product
class Product {
    // Attributes
    private $name;    // product name
    private $id;      // product ID
    private $brands;  // product brand
    private $price;   // product price

    // Parameterized constructor
    function __construct($id, $name, $brands, $price) {
        // Initialize attributes with provided values
        $this->id = $id;
        $this->name = $name;
        $this->price = $price;
        $this->brands = $brands;
    }

    // Setter methods

    // Set the product ID
    function set_id($id) {
        $this->id = $id;
    }

    // Set the product brand
    function set_brands($brands) {
        $this->brands = $brands;
    }

    // Set the product name
    function set_name($name) {
        $this->name = $name;
    }

    // Set the product price
    function set_price($price) {
        $this->price = $price;
    }

    // Getter methods

    // Get the product ID
    function get_id() {
        return $this->id;
    }

    // Get the product name
    function get_name() {
        return $this->name;
    }

    // Get the product brand
    function get_brands() {
        return $this->brands;
    }

    // Get the product price
    function get_price() {
        return $this->price;
    }

    // Destructor
    function __destruct() {
    }
}
?>
