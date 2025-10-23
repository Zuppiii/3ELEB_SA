#include <stdio.h>
#include <stdlib.h>

int base, altezza;

int main(){

    printf("inserire la base del triangolo \n");
    scanf("%d", &base);

    printf("inserire l'altezza del triangolo \n");
    scanf("%d", &altezza);

    float area = (base * altezza)/2.00;

    printf("l'area del triangolo e' (%d * %d)/2 = %f \n", base, altezza, area);
    scanf("%d", &altezza);

    return0;

}