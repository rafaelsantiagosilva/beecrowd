#include <stdio.h>

int main(void)
{
     int distance;
     double totalGasUsed;

     scanf("%d%lf", &distance, &totalGasUsed);

     printf("%.3lf km/l\n", distance / totalGasUsed);

     return 0;
}