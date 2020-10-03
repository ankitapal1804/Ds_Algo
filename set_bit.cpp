#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<__builtin_popcount(n)<<'\n';
	}
	return 0;
}