#include <stdio.h>
#include <stdlib.h>

int base, altezza;

int main(){

    printf("inserire la base del rettangolo \n");
    scanf("%d", &base);

    printf("inserire l'altezza del rettangolo \n");
    scanf("%d", &altezza);

    float area = ((float)base * altezza);
    float perimetro = (((float)base + altezza)*2);

    printf("l'area del rettangolo e' pari a (%d * %d) = %f \n", base, altezza, area);
    printf("ll suo perimetro e' pari a (%d + %d)*2 = %f \n", base, altezza, perimetro);
    scanf("%d", &altezza);

    return 0;

}
