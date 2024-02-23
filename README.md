# README 
# LP2DPBO2024C - Documentation for Shirt Inventory Management System

## Design of Classes and Program

### 1. Class Hierarchy
![Class Diagram](https://drive.google.com/uc?id=1-yJt5-yTmvZBkm4vE3N9149RdWbcOMwl)

#### 1.1. Product Class

- Attributes:
  - `string name`: product name
  - `string id`: product ID
  - `string brands`: product brand
  - `double price`: product price

- Methods:
  - `Product()`: Default constructor
  - `Product(string id, string name, string brands, double price)`: Parameterized constructor
  - Setter methods:
    - `void set_id(string id)`
    - `void set_brands(string brands)`
    - `void set_name(string name)`
    - `void set_price(double price)`
  - Getter methods:
    - `string get_id()`
    - `string get_name()`
    - `string get_brands()`
    - `double get_price()`

#### 1.2. Clothing Class (Derived from Product)

- Attributes:
  - `string size`: clothing size
  - `string material`: clothing material
  - `string gender`: clothing gender

- Methods:
  - `Clothing()`: Default constructor
  - `Clothing(string id, string name, string brands, double price, string size, string material, string gender)`: Parameterized constructor
  - Setter methods:
    - `void set_size(string size)`
    - `void set_material(string material)`
    - `void set_gender(string gender)`
  - Getter methods:
    - `string get_size()`
    - `string get_material()`
    - `string get_gender()`

#### 1.3. Shirt Class (Derived from Clothing)

- Attributes:
  - `string color`: shirt color
  - `string sleeve`: shirt sleeve type

- Methods:
  - `Shirt()`: Default constructor
  - `Shirt(string id, string name, string brands, double price, string size, string material, string gender, string color, string sleeve)`: Parameterized constructor
  - Setter methods:
    - `void set_color(string color)`
    - `void set_sleeve(string sleeve)`
  - Getter methods:
    - `string get_color()`
    - `string get_sleeve()`
  - `void displayList(int index)`: Method for displaying shirt information in a formatted table

### 2. Program Flow

1. **Main Function**
   - Creates a list to store Shirt objects.
   - Prompts the user for the number of Shirt data to input (minimum 3).
   - Loops to input Shirt data:
     - Prompts user for details for each Shirt.
     - Instantiates a Shirt object with user input values and adds it to the list.
   - Displays the header of the table.
   - Loops to display Shirt data using the `displayList` method.

2. **Product Class**
   - Represents the base class for a product with common attributes (name, ID, brand, price).
   - Provides setter and getter methods for each attribute.

3. **Clothing Class**
   - Represents a derived class from Product with additional attributes (size, material, gender).
   - Inherits from the Product class.

4. **Shirt Class**
   - Represents a derived class from Clothing with additional attributes (color, sleeve).
   - Inherits from the Clothing class.
   - Implements a method (`displayList`) to display shirt information in a formatted table.

### 3. Program Screenshot

![Php Screenshot](https://github.com/fridzfth/LP2DPBO2024C2/blob/99260b01a7919022a99168a2d44132e98d25e453/CPP/Screenshots/cpp%20scrsht.png)

