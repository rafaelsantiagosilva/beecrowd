#include <stdio.h>

int main(void)
{
     char name[999];
     double fixedSalary, sellMoney;

     scanf("%s%lf%lf", &name, &fixedSalary, &sellMoney);
     printf("TOTAL = R$ %.2lf\n", fixedSalary + (sellMoney * 0.15));

     return 0;
}