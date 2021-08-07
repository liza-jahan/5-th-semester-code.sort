//even & odd ....task 6
#include<stdio.h>
int main()
{
 int a,b[100],i ,c,d;
 scanf("%d",&a) ;
 for(i=0;i<a;i++)
   {
       scanf("%d",&b[i]);
   }
  for(i=0;i<a;i++)
  {
   if (b[i]%2==0)
   {
       printf("EVEN = %d\n",b[i]);
   }
  }
     for(i=0;i<a;i++)
     {

 if(b[i]%2 !=0)
   {
       printf("ODD = %d\n",b[i]);
   }



  }

return 0;

}
