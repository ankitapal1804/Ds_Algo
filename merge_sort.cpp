#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void merge(ll *a,ll s,ll e){
	ll mid=(s+e)/2;
	ll i=s,j=mid+1,k=0;
	ll *a1=new ll[e-s+1];
	while(i<=mid and j<=e){
		if(a[i]<=a[j]){
			a1[k++]=a[i++];
		}
		else{
			a1[k++]=a[j++];
		}
	}
	while(i<=mid){
		a1[k++]=a[i++];
	}
	while(j<=e){
		a1[k++]=a[j++];
	}
    for(ll i=s;i<=e;i++){
		a[i]=a1[i-s];
	}
}
void merge_sort(ll *a,ll s,ll e){
	if(s>=e){
		return;
	}
	ll mid=(s+e)/2;
	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);
	merge(a,s,e);
}
int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	merge_sort(a,0,n-1);
	for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}