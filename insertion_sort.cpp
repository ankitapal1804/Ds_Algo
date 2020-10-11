#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
          cin>>a[i];
	}
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
