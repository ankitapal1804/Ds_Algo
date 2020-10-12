#include<bits/stdc++.h>
using namespace std;
 patch-1
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


int main() {
	int i, j, count, temp, number[25];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
  
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

 
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
 main
}
