//sum & average ...task 4;
#include<stdio.h>
int main()
{
 int a[100] ,sum=0,ave,b,c,i;

  scanf("%d",&b) ;
  for(i=0;i<b;i++)
   {
       scanf("%d",&a[i]);
       sum = sum +a[i];
   }
   printf("SUM = %d\n",sum);
  printf("Average = %d",sum/b);
 return 0;
}
