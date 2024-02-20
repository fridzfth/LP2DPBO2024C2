/**
 * Clothing child of product
 */
class Clothing extends Product{
    // atribut produk protected agar dapat digunakan oleh keturunannya & no acces langsung(kalau beda package)
    protected String size; // cloth size
    protected String material; // cloth mat
    protected String gender; //  cloth gender
    // contruct kosong
    protected Clothing(){
    }
    //construct with value
    protected Clothing(String id, String name, String brands, double price,String size, String material, String gender){
        super(id,name, brands,price); // mengisi variabel yang dipunya orang tuanya
        this.size = size;
        this.material =material;
        this.gender = gender;
    } 
    
    // set void
    void set_size(String size){
        this.size = size;
    }
    void set_material(String material){
        this.material = material;
    }
    void set_gender(String gender){
        this.gender = gender;
    }

    // get method
    String get_size(String size){
        return this.size;
    }
    String get_material(String material){
        return this.material;
    }
    String get_gender(String gender){
        return this.gender;
    }
    
    
}