#include<iostream>
using namespace std;
int bin(int n)
{
	int r;
	while(n)
	{
		r=n%10;
		if(r!=0&&r!=1)
		{
			return 0;
		}
		n=n/10;
	}
	return 1;
}
int main()
{
	int n,r;
	cin>>n;
	if(bin(n)==1)
	{
		cout<<"binary";
	}
	else
	{
		cout<<"Non binary";
	}
	return 0;
}
