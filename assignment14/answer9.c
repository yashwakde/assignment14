#include<stdio.h>
int main()
{
   int a[6];
   int i;
  printf("enter a number\n");
  for(i=0;i<6;i++)
  {
    scanf("%d",&a[i]);
  }
   for(i=0;i<6;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\n");
   for(i=5;i>=0;i--)
   {
    printf("%d ",a[i]);
   }
}