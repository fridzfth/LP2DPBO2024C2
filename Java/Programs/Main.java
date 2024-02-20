// import untuk array list
import java.util.ArrayList;
import java.util.List;
// library untuk scanf
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); //scanner
        List<Shirt> list = new ArrayList<>();
        System.out.print("Berapa Data Shirt yang ingin diinput (Minimal 3) : ");
        int n = sc.nextInt(); // jumlah data yang maun diinput
        for (int i = 1; i < n+1; i++) { // loop meminta masukan user sebanyak n
            String id, name, brands, size, material, color, sleeve, gender;
            double price;
            // Proses input data
            System.out.println("Silakan input detail Shirt yang diinginkan");
            System.out.print("Id: ");
            id = sc.next();
            System.out.print("Name : ");
            name = sc.next();
            System.out.print("Brand : ");
            brands = sc.next();
            System.out.print("Harga : ");
            price = sc.nextDouble();
            System.out.print("Ukuran : ");
            size = sc.next();
            System.out.print("Bahan : ");
            material = sc.next();
            System.out.print("Gender : ");
            gender= sc.next();
            System.out.print("Color : ");
            color = sc.next();
            System.out.print("Sleeve Type: ");
            sleeve = sc.next();
            System.out.println("");
            // instansiasi Shirt temp dengan value sesuai input user
            Shirt temp = new Shirt(id,name, brands,price,size,material,gender,color,sleeve);
            list.add(temp); // add data to list
        }
        System.out.println("Here's Your Data");
        int i = 1;
        for (Shirt shirt : list) {
            System.out.print( i + ". ");
            shirt.displayList();   
            System.out.println("");
            i++;
        }
    }    
}
