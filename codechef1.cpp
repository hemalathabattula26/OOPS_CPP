#include<bits/stdc++.h>
using namespace std;
int Issorted(int n,int *a){
	//base case
	if (n==1)return 1;

	//rec
	if(a[0] <= a[1]){
		return Issorted(n-1,a+1);
	}
	return -1;
}
int main()
{
	int arr[]={3,5,7,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<Issorted(n,arr);
}

