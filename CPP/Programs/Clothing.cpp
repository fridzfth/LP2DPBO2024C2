#include "Product.cpp"

// Derived class representing a clothing product, inheriting from the Product base class
class Clothing : public Product{
private:
    string size;    // clothing size
    string material; // clothing material
    string gender;   // clothing gender

public:
    // Default constructor
    Clothing() : Product(){
        // Initialize additional attributes with default values
        this->gender = "";
        this->material = "";
        this->size = "";
        /* Alternatives if we don't use : Product() */
        /*  this->set_id(id);
            this->set_name(name);
            this->set_brands(brands);
            this->set_price(price);    */
    }

    // Parameterized constructor
    Clothing(string id, string name, string brands, double price, string size, string material, string gender)
    : Product(id, name, brands, price){
        // Initialize additional attributes with provided values
        this->gender = gender;
        this->material = material;
        this->size = size;
        /* Alternatives if we don't use : Product(id, name, brands, price) */
        /*  this->set_id(id);
            this->set_name(name);
            this->set_brands(brands);
            this->set_price(price);    */
    }

    // Setter methods

    // Set the clothing size
    void set_size(string size) {
        this->size = size;
    }

    // Set the clothing material
    void set_material(string material) {
        this->material = material;
    }

    // Set the clothing gender
    void set_gender(string gender) {
        this->gender = gender;
    }

    // Getter methods

    // Get the clothing size
    string get_size()  {
        return this->size;
    }

    // Get the clothing material
    string get_material()  {
        return this->material;
    }

    // Get the clothing gender
    string get_gender()  {
        return this->gender;
    }

    // Destructor
    ~Clothing(){
        // No specific cleanup needed in this case
    }
};
