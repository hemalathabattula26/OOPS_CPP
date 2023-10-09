#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n],t=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target,s;
	cin>>target;
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=i;j<n;j++)
		{
			s=s+a[j];
			if(s==target)
			{
				t+=1;
				break;
			}
		}
	}
	cout<<t;
}