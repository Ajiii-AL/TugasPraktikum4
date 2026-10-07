#include <stdio.h>


int main(){

    int a, b, c;

    printf("Masukkan panjang sisi a: "); scanf("%d", &a);
    printf("Masukkan panjang sisi b: "); scanf("%d", &b);
    printf("Masukkan panjang sisi c: "); scanf("%d", &c);

    if(a <= b && b <= c){

        if((a*a) + (b*b) == (c*c)){
            printf("segitiga siku-siku");
        }else if((a * a) + (b * b) > (c*c)){
            printf("segitiga lancip");
        }else if((a * a) + (b * b) < (c*c)){
            printf("segitiga tumpul");
        }

    }else{
        printf("nilai tidak valid");
    }


}