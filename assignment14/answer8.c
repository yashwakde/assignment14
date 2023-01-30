#include<stdio.h>
int main()
{
   int a[10] ={11,5,9,25,140,255,10,6,1,4};
   int i,j,temp=0;
   for(i = 0; i<9;i++)
   {
    for(j=i;j<10;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
   }
   printf(" second smallest number is %d ",a[1]);
   return 0;
}