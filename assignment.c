#include<stdio.h>
int main()
{
    int a[3],sum[5];
    printf("enter 3 numbers=");
    scanf("%d %d %d", &a[0],&a[1],&a[2]);
    sum[5]=a[0]+a[1]+a[2];
    printf("Sum of %d+%d+%d is %d",a[0],a[1],a[2],sum[5]);
}