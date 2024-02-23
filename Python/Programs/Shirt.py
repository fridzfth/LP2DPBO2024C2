# Import kelas dasar Clothing
from Clothing import Clothing

# Derived class representing a shirt, inheriting from the Clothing class
class Shirt(Clothing):
    # Constructor
    def __init__(self, id="", name="", brands="", price=0, size="", material="", gender="", color="", sleeve=""):
        # Call the constructor of the base class (Clothing)
        super().__init__(id, name, brands, price, size, material, gender)
        # Initialize additional attributes with default or provided values
        self.color = color
        self.sleeve = sleeve

    # Setter methods

    # Set the shirt color
    def set_color(self, color):
        self.color = color

    # Set the shirt sleeve type
    def set_sleeve(self, sleeve):
        self.sleeve = sleeve

    # Getter methods

    # Get the shirt color
    def get_color(self):
        return self.color

    # Get the shirt sleeve type
    def get_sleeve(self):
        return self.sleeve

    # Method for displaying list data in a dynamic table
    def displayList(self, index):
        # Display the shirt information in a formatted table
        print(f" | {index:4} | {self.get_id():15} | {self.get_name():20} | {self.get_brands():15} | "
              f"Rp. {self.get_price():20,.2f} | {self.get_size():10} | {self.get_material():15} | "
              f"{self.get_gender():10} | {self.color:15} | {self.sleeve:15} |")
        print(" +----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+")


    # Destructor (not explicitly needed in Python, handled automatically)
