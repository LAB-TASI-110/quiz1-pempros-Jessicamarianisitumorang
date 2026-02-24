#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int porsiButet;

    int harga;
    int total;
    int subtotal = 0;

    
    char namaMenu[100][50];
    int porsiMenu[100];
    int hargaMenu[100];
    int totalMenu[100];

    int index = 0;

    while(1) {

        scanf("%s", kode);

        if(strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &porsiButet);

        int porsiUcok = 2 * porsiButet;
        int totalPorsi = porsiButet + porsiUcok;

        
        if(strcmp(kode, "NGS") == 0) {
            strcpy(namaMenu[index], "Nasi Goreng Spesial");
            harga = 25000;
        }
        else if(strcmp(kode, "AP") == 0) {
            strcpy(namaMenu[index], "Ayam Penyet");
            harga = 22000;
        }
        else if(strcmp(kode, "SA") == 0) {
            strcpy(namaMenu[index], "Sate Ayam");
            harga = 30000;
        }
        else if(strcmp(kode, "BU") == 0) {
            strcpy(namaMenu[index], "Bakso Urat");
            harga = 20000;
        }
        else if(strcmp(kode, "MAP") == 0) {
            strcpy(namaMenu[index], "Mie Ayam Pangsit");
            harga = 20000;
        }
        else if(strcmp(kode, "GG") == 0) {
            strcpy(namaMenu[index], "Gado-Gado");
            harga = 18000;
        }
        else if(strcmp(kode, "SAM") == 0) {
            strcpy(namaMenu[index], "Soto Ayam");
            harga = 19000;
        }
        else if(strcmp(kode, "RD") == 0) {
            strcpy(namaMenu[index], "Rendang Daging");
            harga = 32000;
        }
        else if(strcmp(kode, "IB") == 0) {
            strcpy(namaMenu[index], "Ikan Bakar");
            harga = 35000;
        }
        else if(strcmp(kode, "NUK") == 0) {
            strcpy(namaMenu[index], "Nasi Uduk Komplit");
            harga = 28000;
        }
        else {
            printf("Kode tidak ditemukan!\n");
            continue;
        }

        total = totalPorsi * harga;

        porsiMenu[index] = totalPorsi;
        hargaMenu[index] = harga;
        totalMenu[index] = total;

        subtotal += total;

        index++;
    }

    
    int diskonPersen = 0;
    char kupon[20] = "-";

    if(subtotal >= 500000) {
        diskonPersen = 25;
        strcpy(kupon, "Hitam");
    }
    else if(subtotal >= 400000) {
        diskonPersen = 20;
        strcpy(kupon, "Hijau");
    }
    else if(subtotal >= 300000) {
        diskonPersen = 15;
        strcpy(kupon, "Merah");
    }
    else if(subtotal >= 200000) {
        diskonPersen = 10;
        strcpy(kupon, "Kuning");
    }
    else if(subtotal >= 100000) {
        diskonPersen = 5;
        strcpy(kupon, "Biru");
    }

    int potongan = subtotal * diskonPersen / 100;
    int totalBayar = subtotal - potongan;

    // Cetak Struk
    printf("\nMenu                      Porsi     Harga     Total\n");
    printf("========================================================\n");

    for(int i = 0; i < index; i++) {
        printf("%-25s %5d %10d %10d\n",
               namaMenu[i],
               porsiMenu[i],
               hargaMenu[i],
               totalMenu[i]);
    }

    printf("========================================================\n");
    printf("Subtotal                          %10d\n", subtotal);
    printf("Kupon                             %10s\n", kupon);
    printf("Diskon                            %9d%%\n", diskonPersen);
    printf("Potongan                          %10d\n", potongan);
    printf("Total Pembayaran                  %10d\n", totalBayar);

    return 0;
}