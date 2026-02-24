#include <stdio.h>

int main() {

    int jumlah;
    float harga;

    printf("=== SISTEM LAUNDRY DEL ===\n");


    printf("Masukkan harga per kg: ");
    scanf("%f", &harga);

    printf("Berapa jumlah pelanggan hari ini? ");
    scanf("%d", &jumlah);
    getchar();

    for (int i = 1; i <= jumlah; i++) {

        char nama[50];
        float berat;
        float total;

        printf("\n--- Pelanggan %d ---\n", i);

        printf("Masukkan nama pelanggan nya: ");
        fgets(nama, sizeof(nama), stdin);

        printf("Masukkan berat cucian (kg): ");
        scanf("%f", &berat);
        getchar(); 

        total = berat * harga;

        printf("\nSTRUK\n");
        printf("Nama  : %s", nama);
        printf("Berat : %.2f kg\n", berat);
        printf("Total : Rp %.0f\n", total);
    }

    printf("\nArigatou Gozaimasu\n");

    return 0;
}