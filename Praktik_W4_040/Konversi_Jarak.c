#include <stdio.h>

int main() {

    int jarak_x;
    int jarak_km;
    int jarak_m;
    int jarak_cm;

    printf("masukan jarak dalam centimeter:");
    scanf("%d", &jarak_x);

    jarak_km = jarak_x / 100000;
    jarak_m = (jarak_x % 100000) / 100;
    jarak_cm = jarak_x % 100;

    printf("jarak tersebut adalah %d km %d m %d cm", jarak_km, jarak_m, jarak_cm);

    return 0;
}