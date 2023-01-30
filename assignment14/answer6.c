#include<stdio.h>
int main()
{
   int a[10] ={2,3,5,7,9,8,10,6,1,4};
   int i,j,temp=0;
   for(i = 0; i<9;i++)
   {
    for(j=i+1;j<10;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
   }

   for(i=0;i<10;i++)
   {
    printf("%d ",a[i]);
   }
   return 0;
}