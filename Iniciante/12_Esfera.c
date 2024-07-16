#include <stdio.h>
#include <math.h>

int main(void)
{
     double radius;
     scanf("%lf", &radius);
     printf("VOLUME = %.3lf\n", (4.0 / 3.0) * 3.14159 * pow(radius, 3));
     return 0;
}