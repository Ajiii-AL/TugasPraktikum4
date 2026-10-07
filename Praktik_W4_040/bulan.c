#include <stdio.h>

int main(){

    int bulan1;
    int bulan2;
    int Lamadurasi;

    printf("Masukkan bulan pertama (1-12): ");
    scanf("%d", &bulan1);

    printf("Masukkan bulan kedua (1-12): ");
    scanf("%d", &bulan2);

    if(bulan2 >= bulan1 ){
        Lamadurasi = bulan2 - bulan1;

    }else{
        Lamadurasi = (bulan2 + 12) - bulan1;
    }

    printf("lamadurasi bulan 1 ke bulan 2 adalah: %d", Lamadurasi);

    return 0;
}