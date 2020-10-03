#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void insertion_sort(ll a[],ll n){
	for(int i=1;i<n;i++){
		int t=i-1,e=a[i];
		while(t>=0 && a[t]>e){
			a[t+1]=a[t];
			t--;
		}
		a[t+1]=e;
	}
}
int main() {
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
          cin>>a[i];
	}
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}