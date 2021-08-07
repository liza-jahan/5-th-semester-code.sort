//2 nd largest and  last .....task 9
#include <stdio.h>
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    printf("Enter element : ");
    for(int i=0;i<n;i++)
        {
          scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])     //swap
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

    printf("Second Largest element is : %d\n",arr[1]);
        printf("Second Smallest element is : %d ",arr[n-2]);


}
