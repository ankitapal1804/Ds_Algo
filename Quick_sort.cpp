#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll partation(ll *a,ll s,ll e){
     ll pivot=a[e];
	 ll i=s-1,j=s;
	 for(ll j=s;j<e;j++){
		 if(a[j]<=pivot){
			 i+=1;
			 swap(a[j],a[i]);
		 }
	 }
	 swap(a[i+1],a[e]);
	 return (i+1);
}
void quick_sort(ll *a,ll s,ll e){
	if(s>=e){
		return ;
	}
	ll p=partation(a,s,e);
	// left side
	quick_sort(a,s,p-1);
	// right side
	quick_sort(a,p+1,e);

}
int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}