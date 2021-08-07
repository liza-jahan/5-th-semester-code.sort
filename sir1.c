#include<stdio.h>
int main()
{

 int num,temp,r,sum=0;
	printf("Enter any number= ");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)////123 r = 123%10;   //r = 12%10 ///r = 1%10= 1
	              ///sum = 0*10+3;    //sum = 3*10+2= 32 ///sum = 32*10 +1= 321
             ///// temp = 123/10;12;  ////temp = 12/10=1 //temp = 1/10= 0
    {r=temp%10;
		sum=sum *10+ r;
		temp=temp/10;

   }

 if(sum==num)
 {
     printf(" palindrom");
 }
 else
 {
     printf("no");
 }
 }
