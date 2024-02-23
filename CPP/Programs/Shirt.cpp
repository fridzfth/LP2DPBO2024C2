#include "Clothing.cpp"
#include <iomanip> // for setprecision function

// Derived class representing a shirt, inheriting from the Clothing class
class Shirt : public Clothing{
private:
    string color;    // shirt color
    string sleeve;   // shirt sleeve type

public:
    // Default constructor
    Shirt(): Clothing(){ /*": Clothing()" -> konsepnya mirip super di java*/
        // Initialize additional attributes with default values
        this->color = "";
        this->sleeve = "";
    }

    // Parameterized constructor
    Shirt(string id, string name, string brands, double price, string size, string material, string gender, string color, string sleeve)
    : Clothing(id, name, brands, price, size, material, gender){
        // Initialize additional attributes with provided values
        this->color = color;
        this->sleeve = sleeve;
        /* Alternatives if we don't use : Clothing(id, name, brands, price, size, material, gender) */
        // this->set_id(id);
        // this->set_name(name);
        // this->set_brands(brands);
        // this->set_price(price);
        // this->set_material(material);
        // this->set_size(size);
        // this->set_gender(gender);
    }

    // Setter methods

    // Set the shirt color
    void set_color(string color) {
        this->color = color;
    }

    // Set the shirt sleeve type
    void set_sleeve(string sleeve) {
        this->sleeve = sleeve;
    }

    // Getter methods

    // Get the shirt color
    string get_color() {
        return this->color;
    }

    // Get the shirt sleeve type
    string get_sleeve(){
        return this->sleeve;
    }

    /// Method for displaying list data in a dynamic table
    void displayList(int index){
        // Display the shirt information in a formatted table
        cout << " | " << setw(4) << index << " | ";
        cout << setw(15) << this->get_id() << " | ";
        cout << setw(20) << this->get_name() << " | ";
        cout << setw(15) << this->get_brands() << " | ";
        cout << "Rp. " << setw(20) << fixed << setprecision(2) << this->get_price() << " | ";
        cout << setw(10) << this->get_size() << " | ";
        cout << setw(15) << this->get_material() << " | ";
        cout << setw(10) << this->get_gender() << " | ";
        cout << setw(15) << this->color << " | ";
        cout << setw(15) << this->sleeve << " | " << endl;
        cout << " +----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+"<< ends;
    }

    // Destructor
    ~Shirt(){
        // No specific cleanup needed in this case
    }
};

