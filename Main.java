public class Main {
    public static void main(String[] args) {
        // Variabel
        int angka = 5;
        String teks = "Hello, World!";

        // Output
        System.out.println(teks);

        // For loop
        for (int i = 0; i < angka; i++) {
            System.out.println("Iterasi ke-" + (i + 1));
        }

        // If statement
        if (angka > 3) {
            System.out.println("Angka lebih besar dari 3");
        } else {
            System.out.println("Angka kurang dari atau sama dengan 3");
        }

        // While loop
        int j = 0;
        while (j < angka) {
            System.out.println("Iterasi while ke-" + (j + 1));
            j++;
        }

        // Do-while loop
        int k = 0;
        do {
            System.out.println("Iterasi do-while ke-" + (k + 1));
            k++;
        } while (k < angka);

        // Array satu dimensi
        int[] arrSatuDimensi = {1, 2, 3, 4, 5};
        System.out.println("Elemen ke-3 dari array: " + arrSatuDimensi[2]);

        // Array multidimensi
        int[][] arrMultiDimensi = {{1, 2, 3}, {4, 5, 6}};
        System.out.println("Elemen kedua dari baris pertama: " + arrMultiDimensi[0][1]);
    }
}
