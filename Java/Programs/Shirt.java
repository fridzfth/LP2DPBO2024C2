/**
 * Shirt, granchild Product
 */
class Shirt extends Clothing {
    // atribut private
    private String color;
    private String sleeve;
    // construct kosong
    Shirt(){
    }
    // construct dengan value
    Shirt(String id, String name, String brands, double price,String size, String material, String gender, String color, String sleeve){
        super(id,name,brands,price,size,material,gender); // mengisi variabel yang dipunya orang tuanya
        this.color = color;
        this.sleeve = sleeve;
    }

    // set void
    void set_color(String color){
        this.color = color;
    }
    void set_sleeve(String sleeve){
        this.sleeve = sleeve;
    }

    // get method
    String get_color(String color){
        return this.color;
    }
    String get_sleeve(String sleeve){
        return this.sleeve;
    }

    // method untuk print list data
    void displayList(){
        System.out.println( "Product Id : "+ this.id);
        System.out.println( " ~ Name : "+ this.name);
        System.out.println( " ~ Brand : "+ this.brands);
        System.out.println( " ~ Price : "+ String.format("Rp. %,.2f", this.price));
        System.out.println( " ~ Size : "+ this.size);
        System.out.println( " ~ Material : "+ this.material);
        System.out.println( " ~ Gender : "+ this.gender);
        System.out.println( " ~ Color : "+ this.color);
        System.out.println( " ~ Sleeve : "+ this.sleeve);
    }
}