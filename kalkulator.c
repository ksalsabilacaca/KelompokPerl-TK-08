#include <stdio.h>

// Fungsi penjumlahan
int tambah(int a, int b); // Akan diisi oleh anggota 1

// Fungsi pengurangan
int kurang(int a, int b); // Akan diisi oleh anggota 2

// Fungsi perkalian
int kali(int a, int b);   // Akan diisi oleh anggota 3

// Fungsi pembagian
float bagi(int a, int b); // Akan diisi oleh anggota 4

int main() {
    int x = 10, y = 5;

    printf("Penjumlahan: %d\n", tambah(x, y));
    printf("Pengurangan: %d\n", kurang(x, y));
    printf("Perkalian: %d\n", kali(x, y));
    printf("Pembagian: %.2f\n", bagi(x, y));

    return 0;
}
