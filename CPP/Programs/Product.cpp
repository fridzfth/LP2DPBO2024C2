/* Saya Mohammad Faridz Fathin [2202680] mengerjakan LP2 dalam mata kuliah DPBO untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */
#include <iostream>
#include <string>

// standard namespace
using namespace std;

// Base class representing a product
class Product {
    // Attributes
private:
    string name;    // product name
    string id;      // product ID
    string brands;  // product brand
    double price;   // product price

public:
    // Default constructor
    Product() {
        // Initialize attributes with default values
        this->id = "";
        this->name = "";
        this->price = 0;
        this->brands = "";
    }

    // Parameterized constructor
    Product(string id, string name, string brands, double price) {
        // Initialize attributes with provided values
        this->id = id;
        this->name = name;
        this->price = price;
        this->brands = brands;
    }

    // Setter methods

    // Set the product ID
    void set_id(string id) {
        this->id = id;
    }

    // Set the product brand
    void set_brands(string brands) {
        this->brands = brands;
    }

    // Set the product name
    void set_name(string name) {
        this->name = name;
    }

    // Set the product price
    void set_price(double price) {
        this->price = price;
    }

    // Getter methods

    // Get the product ID
    string get_id()  {
        return this->id;
    }

    // Get the product name
    string get_name()  {
        return this->name;
    }

    // Get the product brand
    string get_brands()  {
        return this->brands;
    }

    // Get the product price
    double get_price()  {
        return this->price;
    }

    // Destructor
    ~Product(){
    }
};
