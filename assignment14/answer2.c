#include<stdio.h>
int main()
{
    int i;
    float   sum=0, a[10], average = 0;
    printf("enter 10 number\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<10;i++)
    {
     sum = sum+a[i];
    }
     average = sum/10;
   printf("%.2f",average);
   return 0;
}