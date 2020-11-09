#include<stdio.h>
int main()
{
    int a[3];
    int i, x, j;
    for (i=0;i<=2; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=i+1; j<=2;j++)
    {
        if(a[i]>a[j])
        {
            x=a[i];
            a[i]=a[j];
            a[j]=x;
        }

    }
    printf("%d", a[i]);

    return 0;

}

