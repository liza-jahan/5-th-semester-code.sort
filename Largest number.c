// largest number ...task..7
#include<stdio.h>
int main()
{
  int a[100] ,b,c,d,m,i;
scanf("%d",&b);
for(  i=0;i<b;i++)
  {

    scanf("%d",&a[i]);
  }
   m = a[0];
   for(  i=0;i<b;i++)
    {
    if(a[i]>m)
     {
         m = a[i];
     }

    }
     printf("largest = %d",m);


}
