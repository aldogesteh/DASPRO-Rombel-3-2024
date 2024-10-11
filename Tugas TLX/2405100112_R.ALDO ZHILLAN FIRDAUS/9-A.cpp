// Faktorial dari sebuah bilangan bulat positif nn, dinotasikan dengan n!n!, didefinisikan sebagai hasil perkalian seluruh bilangan bulat positif dari 11 hingga nn. Dengan kata lain,

// n!=1×2×⋯×n−1×n
// n!=1×2×⋯×n−1×n

// Fungai faktorial ini dapat diimplementasikan pada C++ sebagai berikut:

// int faktorial(int n) {
//     int hasil = 1;
//     for (int i = 2; i <= n; i++) {
//         hasil *= i;
//     }
//     return hasil;
// }

// Sekarang, dapatkah Anda mengimplementasikannya tanpa menggunakan struktur perulangan apapun? Lalu, cetaklah nilai dari 12!12!.

#include <iostream>
using namespace std;

int faktorial(int n) {
    // Kondisi dasar
    if (n == 1) {
        return 1; // 1! = 1
    } else {
        // Kasus rekursif
        return faktorial(n - 1) * n; // n! = (n-1)! * n
    }
}

int main() {
    cout << faktorial(12) << endl; // Menghitung dan mencetak 12!
    return 0;
}
Fungsi main():

// #jawab#
//     Program akan memanggil fungsi faktorial(12) di dalam main(), yang artinya menghitung faktorial dari 12. Nilai ini kemudian dicetak dengan cout.
//       Output: Hasil dari 12! adalah 12×11×10×…×1=47900160012×11×10×…×1=479001600, yang kemudian ditampilkan di layar.
  
//   Program ini menggunakan rekursi untuk menghitung faktorial dari suatu bilangan. Rekursi berhenti ketika mencapai kondisi dasar n == 1, dan kemudian hasil dari setiap pemanggilan rekursif dikalikan hingga mendapatkan nilai faktorial penuh.


