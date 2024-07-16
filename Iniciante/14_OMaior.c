#include <stdio.h>
#include <math.h>

int findBigger(int n1, int n2)
{
     int bigger = (n1 + n2 + abs(n1 - n2)) / 2;
     return bigger;
}

int main(void)
{
     int a, b, c;
     scanf("%d%d%d", &a, &b, &c);

     int bigger = findBigger(a, b);
     bigger = findBigger(bigger, c);

     printf("%d eh o maior\n", bigger);

     return 0;
}