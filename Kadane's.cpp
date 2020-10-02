/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   
    ll t;
    cin>>t;
    while(t--){
        
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        
        ll prev_max = a[0]; 
        ll curr = a[0]; 
  
   for (ll i = 1; i < n; i++) 
   { 
        curr = max(a[i], curr+a[i]); 
        prev_max = max(prev_max, curr); 
   } 
   
        
        cout<<prev_max<<"\n";
    }

    return 0;
}
