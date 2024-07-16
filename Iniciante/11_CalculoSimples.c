#include <stdio.h>

int main(void)
{
     int idP1, qtdP1, idP2, qtdP2;
     double priceP1, priceP2;

     scanf("%d%d%lf", &idP1, &qtdP1, &priceP1);
     scanf("%d%d%lf", &idP2, &qtdP2, &priceP2);

     printf("VALOR A PAGAR: R$ %.2lf\n", (qtdP1 * priceP1) + (qtdP2 * priceP2));

     return 0;
}