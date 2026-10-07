#include <stdio.h>


int main(){

    int X;

    printf("Masukkan nilai X: ");
    scanf("%d", &X);

    if (X > 0) {
        printf("X adalah bilangan positif\n");
    } else if (X < 0) {
        printf("X adalah bilangan negatif\n");
    } else {
        printf("X adalah nol\n");
    }


    return 0;
}