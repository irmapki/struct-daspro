#include <stdio.h>

struct Nim {
    int angka;
    char huruf;
};

struct Mahasiswa {
    char nama[50];
    struct Nim nomor_induk;
    char email[50];
};

int main() {
    struct Mahasiswa mhs1 = { "Maherza", { 202311005, }, "maherza@gmail.com" };

    printf("Nama Mahasiswa: %s\n", mhs1.nama);
    printf("Nomor Induk Mahasiswa: %d%c\n", mhs1.nomor_induk.angka);
    printf("Email Mahasiswa: %s\n", mhs1.email);

    return 0;
}