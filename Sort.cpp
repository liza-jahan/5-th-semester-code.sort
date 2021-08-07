
//selection sort.........Assignment 1........
 //TIME complexity ......o(n^2)

#include<iostream>
using namespace std;
int main()
{
     int a[1000],b,n,i,temp,j,min_index,d;
 cout<<"Enter the size of array : "<<"\t";
 cin>>n;
 cout<<"Enter the element of array : "<<"\n";
 for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n;i++)
    {
    min_index=i;
          for(j=i+1;j<n;j++)  //OUTER LOOP ...
              {
                if(a[min_index]>a[j]) // INNER LOOP...
                 {
                      min_index =j;
                  }
              }      // SWAP TWO NYMBERS i AND min_index..........
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
    }
   cout<<"Using the Selection sort in the array : "<<"\n";
   for(i=0;i<n;i++)   // PRINT SORTED ARRAY

    {
        cout<<a[i]<<"\n";
    }

   cout<<"\n";
   return 0;
}
