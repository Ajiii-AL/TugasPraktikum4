#include <stdio.h>

int main(){

    int a, b, c;
    int sementara;

    printf("Masukkan angka a : "); scanf("%d", &a);
    printf("Masukkan angka b : "); scanf("%d", &b);
    printf("Masukkan angka c : "); scanf("%d", &c);

    if(a > b){
        sementara = a;
        a = b;
        b = sementara;
    }
    if(a > c){
        sementara = a;
        a = c;
        c = sementara;
    }
    if( b > c){
        sementara = b;
        b = c;
        c = sementara;
    }


    printf("%d %d %d", a, b, c);
    return 0;
}