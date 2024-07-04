#include<iostream>
using namespace std;
int main()
{
 int i,j,c=0,k,n=0;
 cin>>k;
 for(i=1;;i++)
 {
   for(j=1;j<=i/2;j++)
   {
     if(i%j==0)
     {
     c++;
     }
     }
     if(c==1)
     {
    cout<<i<<"\n";
    n++;
    }   
    c=0;  
    if(n==k)
    {
    break;
    }
    }
    return 0;
    }
