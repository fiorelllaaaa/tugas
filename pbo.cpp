#include <iostream>
using namespace std;

int main() {
    // Variabel
    int angka = 5;
    string teks = "Hello, World!";
    
    // Output
    cout << teks << endl;
    
    // For loop
    for (int i = 0; i < angka; i++) {
        cout << "Iterasi ke-" << i + 1 << endl;
    }
    
    // If statement
    if (angka > 3) {
        cout << "Angka lebih besar dari 3" << endl;
    } else {
        cout << "Angka kurang dari atau sama dengan 3" << endl;
    }
    
    // While loop
    int j = 0;
    while (j < angka) {
        cout << "Iterasi while ke-" << j + 1 << endl;
        j++;
    }
    
    // Do-while loop
    int k = 0;
    do {
        cout << "Iterasi do-while ke-" << k + 1 << endl;
        k++;
    } while (k < angka);
    
    // Array satu dimensi
    int arrSatuDimensi[5] = {1, 2, 3, 4, 5};
    cout << "Elemen ke-3 dari array: " << arrSatuDimensi[2] << endl;
    
    // Array multidimensi
    int arrMultiDimensi[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Elemen kedua dari baris pertama: " << arrMultiDimensi[0][1] << endl;
    
    return 0;
}
