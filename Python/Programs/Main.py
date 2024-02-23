from Shirt import Shirt  # Import Shirt class is in a file named Shirt.py
from typing import List

def main():
    # Create a list to store Shirt objects
    shirt_list: List[Shirt] = []
    
    # Prompt user for the number of Shirt data to input
    n = int(input("Enter the number of Shirt data to input (Minimum 3): "))

    # Loop to input Shirt data
    for i in range(1, n + 1):
        id = input(f"Enter details for Shirt {i}\nId: ")
        name = input("Name: ")
        brands = input("Brand: ")
        price = float(input("Price: "))
        size = input("Size: ")
        material = input("Material: ")
        gender = input("Gender: ")
        color = input("Color: ")
        sleeve = input("Sleeve Type: ")

        # Instantiate a Shirt object with user input values
        temp = Shirt(id, name, brands, price, size, material, gender, color, sleeve)
        shirt_list.append(temp)  # add data to the list
        print()

    print("Here's Your Data")
    # Display header of the table
    print(" +----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+")
    print(" | {:<4} | {:<15} | {:<20} | {:<15} | {:<24} | {:<10} | {:<15} | {:<10} | {:<15} | {:<15} |".format(
        "No.", "Product Id", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve"))
    print(" +----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+")

    # Loop to display Shirt data using the displayList method
    for i, shirt in enumerate(shirt_list, start=1):
        shirt.displayList(i)

if __name__ == "__main__":
    main()
