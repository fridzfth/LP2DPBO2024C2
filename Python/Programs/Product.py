
# Saya Mohammad Faridz Fathin [2202680] mengerjakan LP2 dalam mata kuliah DPBO untuk keberkahanNya maka saya 
# tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
# Base Class
class Product:
    # Constructor
    def __init__(self, id="", name="", brands="", price=0):
        # Initialize attributes with default or provided values
        self.id = id
        self.name = name
        self.brands = brands
        self.price = price

    # Setter methods

    # Set the product ID
    def set_id(self, id):
        self.id = id

    # Set the product brand
    def set_brands(self, brands):
        self.brands = brands

    # Set the product name
    def set_name(self, name):
        self.name = name

    # Set the product price
    def set_price(self, price):
        self.price = price

    # Getter methods

    # Get the product ID
    def get_id(self):
        return self.id

    # Get the product name
    def get_name(self):
        return self.name

    # Get the product brand
    def get_brands(self):
        return self.brands

    # Get the product price
    def get_price(self):
        return self.price

    # Destructor (not explicitly needed in Python, handled automatically)
