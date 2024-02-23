#include "shirt.cpp"
#include <list>

int main() {
    // Create a list to store Shirt objects
    list<Shirt> list;
    
    // Prompt user for the number of Shirt data to input
    cout << "Enter the number of Shirt data to input (Minimum 3): ";
    int n;
    cin >> n;

    // Loop to input Shirt data
    for (int i = 1; i < n + 1; i++) {
        string id, name, brands, size, material, color, sleeve, gender;
        double price;

        // Input data from the user
        cout << "Enter details for Shirt " << i << endl;
        cout << "Id: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Brand: ";
        cin >> brands;
        cout << "Price: ";
        cin >> price;
        cout << "Size: ";
        cin >> size;
        cout << "Material: ";
        cin >> material;
        cout << "Gender: ";
        cin >> gender;
        cout << "Color: ";
        cin >> color;
        cout << "Sleeve Type: ";
        cin >> sleeve;
        cout << endl;

        // Instantiate a Shirt object with user input values
        Shirt temp(id, name, brands, price, size, material, gender, color, sleeve);
        list.push_back(temp); // add data to the list
    }

    cout << "Here's Your Data" << endl;
    // Display header of the table
    cout << " +----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
    cout << " | " << setw(4) << "No." << " | ";
    cout << setw(15) << "Product Id" << " | ";
    cout << setw(20) << "Name" << " | ";
    cout << setw(15) << "Brand" << " | ";
    cout << setw(24) << "Price" << " | ";
    cout << setw(10) << "Size" << " | ";
    cout << setw(15) << "Material" << " | ";
    cout << setw(10) << "Gender" << " | ";
    cout << setw(15) << "Color" << " | ";
    cout << setw(15) << "Sleeve" << " | " << endl;
    cout << " +----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;

    int i = 1;
    // Loop to display Shirt data using the displayList method
    for (Shirt shirt : list) {
        shirt.displayList(i);
        cout << endl;
        i++;
    }

    return 0;
}
