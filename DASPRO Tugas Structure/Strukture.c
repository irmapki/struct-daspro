#include <stdio.h>

struct Nim {
    int angka;
};

struct Mahasiswa {
    char nama[50];
    struct Nim nomor_induk;
    char email[50];
};

int main() {
    struct Mahasiswa mhs1 = { "Maherza", { 202311005 }, "maherza@gmail.com" };

    printf("Nama Mahasiswa: %s\n", mhs1.nama);
    printf("Nomor Induk Mahasiswa: %d\n", mhs1.nomor_induk.angka);
    printf("Email Mahasiswa: %s\n", mhs1.email);

    return 0;
}