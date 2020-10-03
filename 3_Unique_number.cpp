#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,n1,j,ans=0;
	cin>>n;
	int a[64]{0};
	for(int i=0;i<n;i++){
        cin>>n1;
		j=0;
		while(n1>0){
			a[j]+=(n1&1);
			j++;
			n1>>=1;
		}
	}
	int p=1;
	for(int i=0;i<64;i++){
		a[i]%=3;
		ans +=p*a[i];
		p*=2;
	}
	cout<<ans<<'\n';
	return 0;

}