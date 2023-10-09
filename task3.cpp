#include<bits/stdc++.h>
using namespace std;
int FirstOcc(int n,int *a,int key){
	//base case
	if (n==0)return -1;

	//rec
	if(a[0] == key){
		return 0;
	}
	int sub=FirstOcc(n-1,a+1,key);
	if(sub==-1)
	{
		return -1;
	}
	else return sub+1;
}

int main()
{
	int arr[]={6,3,7,4,8,7};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	cout<<FirstOcc(n,arr,key);
}

