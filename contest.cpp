#include<iostream>
using namespace std;
int main()
{

     int a,b,t;
    cin>>t;
    while(t--)
  {
      int c=0,n=0,sum=0,i,x[100];
  cin>>a;
     for(i=1;i<=a*2;i++)
      {
          cin>>x[i];

       if(x[i]%2 !=0)
       {
           c++;
       }
       else
       {
          n++;
       }
      }


     if(c==n)
      {
         cout<<"YES"<<"\n";
    }

  else
      {
          cout<<"NO"<<"\n";
      }



  }

    return 0;
}












