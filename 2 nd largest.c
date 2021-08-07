// largest number ...task..8

#include <stdio.h>
int main()
{

    int size,i,first= -1,second = -1;

    printf("Size of array: ");
    scanf("%d",&size);
    int a[100];
    printf("Enter element : ");
    for(i=0; i < size; i++){
     scanf("%d", &a[i]);
        }


    for(i=0; i<size; i++){

      if(a[i] > first){
        second = first;
        first = a[i];
      }
      else if(a[i] > second){

        second = a[i];
      }
    }

    printf("First largest number is :: %d\n",first);
    printf("Second largest number is :: %d\n",second);
    return 0;
}
