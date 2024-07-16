#include <stdio.h>

double avg(double n1, double n2, double n3, double p1, double p2, double p3)
{
     double sum = n1 * p1 + n2 * p2 + n3 * p3;
     return sum / (p1 + p2 + p3);
}

int main(void)
{
     double n1, n2, n3, p1 = 2, p2 = 3, p3 = 5;
     scanf("%lf%lf%lf", &n1, &n2, &n3);
     printf("MEDIA = %.1lf\n", avg(n1, n2, n3, p1, p2, p3));
     return 0;
}