// reverse array...task 1
 #include<stdio.h>
 int main()
 {

   int a[100] ,b,c,i,j;
   scanf("%d",&b) ;
   for(i=1;i<=b;i++)
   {
       scanf("%d",&a[i]);
   }
  printf("Reverse array :");
   for(i=b;i>=1;i--)
   {
       printf("%d\t",a[i]);
   }

 }
