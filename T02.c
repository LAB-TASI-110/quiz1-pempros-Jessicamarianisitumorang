#include<stdio.h>

int main(){
    int N,i,KodeKelompok;
    int jumlah = 0;

    scanf("%d",&N);
    int nilai [N];
    for(i=0;i<N;i++){
        scanf("%d",&nilai[i]);
    }   
    scanf("%d",&KodeKelompok);

    int jumlahKelompok = 4;
    
    if(N % jumlahKelompok != 0){
        printf("Jumlah data tidak bisa dibagi rata");
        return 0;
    }

    if(KodeKelompok < 1 || KodeKelompok > jumlahKelompok){
        printf("Kode kelompok tidak valid");
        return 0;
    }

    int ukuranKelompok = N / jumlahKelompok;
    int indeksAwal = (KodeKelompok - 1) * ukuranKelompok;
    int indexAkhir = (KodeKelompok * ukuranKelompok) - 1;

    for(i=indeksAwal; i<=indexAkhir; i++){
        jumlah += nilai[i];
    }  
    printf("%d",jumlah);

    return 0;

}
