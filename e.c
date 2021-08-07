#include<stdio.h>

   void merge_sort(int x[],int lb,int up)
  {
    if(lb <up)
     {
      int mid;
      mid = (lb+up)/2; // finding mid
        merge_sort(x,lb,mid);  // first half
         merge_sort(x,mid+1,up);  // second half
         merge(x,lb,mid,up); //merging the divided arrays
     }

     }
    void merge (int arr[],int lb,int mid ,int up)
    {
     int i,j,k,s1,s2;
     s1=mid-lb+1;
     s2 = up-mid;
     //creating temporary array for comparison

     int L[s1] ,N[s2];
     //coping elements to the left array
     for(int i =0;i<s1;i++)
      {
          L[i] = arr[lb+i];
      }

       //coping elements to the right array
     for(int j =0;j<s2;j++)
      {
          N[j] = arr[lb+j];
      }
        i =0;  // index for left array
        j= 0;   // index for right array
        k=lb;   // index for final array

      //comparing  and merging
      while (i<s1 && j<s2)
      {
       if(L[i]<N[j])
        {
            arr[k]= L[i];
            i++;
            k++;
        }
       else
       {
         arr[k] =N[j] ;
         j++;
         k++;
       }}
       //coping the remaining elements from left array


      while(i<s1)
      {
        arr[k] = L[i] ;
        i++;
        k++;
      }
       //coping the remaining elements from right array


      while(j<s2)
      {
        arr[k] = N[i] ;
        j++;
        k++;
      }

  }

int main()
{
 int a[] = {5,4, 3, 1,2};
 for(int i=0;i<5;i++)
    {
        printf("%d\n",&a[i]);
    }

   merge_sort(a,0,4) ;
   // after soting

     for(int i=0;i<5;i++)
    {
        printf("%d\n",&a[i]);
    }

}
