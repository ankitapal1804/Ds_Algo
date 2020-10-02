#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int n, int k){
    priority_queue<int, vector<int>>q;
    int i;
    for(i=0;i<k;i++){
        q.push(arr[i]);
    }
    for(;i<n;i++){
        if(arr[i]<q.top()){
            q.pop();
            q.push(arr[i]);
        }
    }
    return q.top();
}
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	    cout << kthSmallest(arr, n, k) << endl;
	}
	return 0;
}