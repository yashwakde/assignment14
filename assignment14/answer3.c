#include<stdio.h>
int main()
{
    int a[10] ,odd= 0,even =0,i;
    printf("enter 10 number\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2 == 0)
       { 
        even = even+a[i];
       }
      else
              odd=  odd+a[i];
          
    }
        printf(" sum of all  even number is %d\n",even);
           printf(" sum of all odd number even  is %d",odd);
}