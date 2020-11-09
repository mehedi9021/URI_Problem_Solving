#include<stdio.h>
int main(void)
{
    int n, h;
    double a, result;
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%lf", &a);
    result = h * a;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %0.2lf\n", result);

    return 0;
}
