#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool possible(ll n,ll k,ll mid){
	if(pow(mid,k)<=n){
		return true;
	}
	return false;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll s=0,e=n,mid,ans=0;
		while(s<=e){
			mid=(s+e)/2;
			if(possible(n,k,mid)){
                ans=mid;
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}