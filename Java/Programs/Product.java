// BAse class
class Product {
    // atribut produk protected agar dapat digunakan oleh keturunannya & no acces langsung(kalau beda package)
    protected String name; // name prod
    protected String id; // id prod
    protected String brands; // prod name
    protected double price; // prod price
    // construct kosong
    protected Product(){
    }
    //construct dengan value
    protected Product(String id, String name, String brands, double price){
        this.id = id;
        this.name = name;
        this.brands =brands;
        this.price = price;
    }
    // set void
    void set_id(String id){
        this.id = id;
    }
    void set_brands(String brands){
        this.brands = brands;
    }
    void set_name(String name){
        this.name = name;
    }
    void set_id(double price){
        this.price =price ;
    }
    // get methods
    String get_id(){
        return this.id;
    }
    String get_name(){
        return this.name;
    }
    String get_brands(){
        return this.brands;
    }
    double get_price(){
        return this.price;
    }
    // Destructor not needed in Java (Garbage Collection takes care of memory management)
}
