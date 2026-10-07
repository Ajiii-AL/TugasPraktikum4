#include <stdio.h>

int main() {

    int jumlah_penduduk, jumlah_kelahiran, jumlah_kematian, jumlah_berimigrasi
    , jumlah_berimigrasi_keluar;


    printf("masukan jumlah kelahiran:");
    scanf("%d", &jumlah_kelahiran);

    printf("masukan jumlah kematian:");
    scanf("%d", &jumlah_kematian);

    printf("masukan jumlah orang yang berimigrasi ke dalam:");
    scanf("%d", &jumlah_berimigrasi);

    printf("masukan jumlah orang yang berimigrasi keluar:");
    scanf("%d", &jumlah_berimigrasi_keluar);

    jumlah_penduduk = jumlah_kelahiran + jumlah_berimigrasi - jumlah_berimigrasi_keluar - jumlah_kematian;

    printf("jumlah penduduk akhir adalah: %d", jumlah_penduduk);

    return 0;
}