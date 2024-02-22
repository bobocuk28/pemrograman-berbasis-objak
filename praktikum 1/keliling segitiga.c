#include <stdio.h>

int main() {
    //Kamus
    float t;
    float a;
    float L;

    //Algoritma

    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    printf("Masukkan nilai a : ");
    scanf("%f", &a);

    printf("Diketahui : \n");
    printf("t = %f\n", t);
    printf("a = %f\n", a);
    printf("L = v0*t + ((a*t*t)/2)\n");
    printf("L = (%f*%f/2)\n", a, t);

    L = a*t/2;
    printf("L = %f", L);

    return 0;
}
