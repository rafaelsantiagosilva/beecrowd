#include <stdio.h>

double avg(double n1, double n2, double p1, double p2)
{
     double sum = n1 * p1 + n2 * p2;
     return sum / (p1 + p2);
}

int main(void)
{
     double v1, v2, p1 = 3.5, p2 = 7.5;

     scanf("%lf%lf", &v1, &v2);
     printf("MEDIA = %.5f\n", avg(v1, v2, p1, p2));

     return 0;
}