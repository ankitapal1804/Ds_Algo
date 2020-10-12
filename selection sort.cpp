#include<iostream.h>
using namespace std;
void main()
{
  int A[100],i,j,n,min,temp;
    cin>>n;
    cout<<"Array before sorting:\n";
    for(i=0;i<n;i++)
    {
      cin>>A[i];
    }
    
   for(i=0;i<n;i++)
   {
    for(j= i+1;j<n;j++)
    {
       min=A[i];
      if( A[j]<min)
      { 
        temp=A[i];
        A[i]=A[j];
        A[j]= temp;
      }
    
    }
    }
   cout<<"The Sorted Array is:\n";
    for(i=0;i<n;i++)
    {
      cout<<A[i];
    }
   }
