#include<stdio.h>


 void quicksort(int *a,int  first,int end)
{
  int temp,k=first,j=end,p =a[(first+end)/2];

    while(k<=j)
    {
        while(a[k]<p)k++;
        while(a[j]>p) j--;
        if(k<=j)
        {
          temp = a[k] ;
          a[k] = a[j];
          a[j] = temp;
           k++;
           j--;
           }
    }

  if(first<j)
    {
        quicksort(a,first,j);
    }

    if(end>k)
    {
        quicksort(a,k,end);
    }
}


int main()
{
  int a[100] ,b,c,i;
  printf("Enter the number : ");
  scanf("%d",&b);
  printf("Enter the element : ");
  for(i=0;i<b;i++)
   {
    scanf("%d", &a[i]) ;
   }
   quicksort(a,0,b-1);
   printf("After the quick sort : ");
   for( int i=0;i<b;i++)
   {
    printf("%d ",a[i]) ;
   }

 return 0;
}
