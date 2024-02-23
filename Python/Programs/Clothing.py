# Import kelas dasar Product
from Product import Product

# Derived class representing a clothing product, inheriting from the Product base class
class Clothing(Product):
    # Constructor
    def __init__(self, id="", name="", brands="", price=0, size="", material="", gender=""):
        # Call the constructor of the base class (Product)
        super().__init__(id, name, brands, price)
        # Initialize additional attributes with default or provided values
        self.size = size
        self.material = material
        self.gender = gender

    # Setter methods

    # Set the clothing size
    def set_size(self, size):
        self.size = size

    # Set the clothing material
    def set_material(self, material):
        self.material = material

    # Set the clothing gender
    def set_gender(self, gender):
        self.gender = gender

    # Getter methods

    # Get the clothing size
    def get_size(self):
        return self.size

    # Get the clothing material
    def get_material(self):
        return self.material

    # Get the clothing gender
    def get_gender(self):
        return self.gender
