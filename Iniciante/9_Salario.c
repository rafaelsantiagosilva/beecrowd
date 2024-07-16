#include <stdio.h>

int main(void)
{
     int number, hours;
     double valueHour;

     scanf("%d%d%lf", &number, &hours, &valueHour);
     printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, hours * valueHour);

     return 0;
}