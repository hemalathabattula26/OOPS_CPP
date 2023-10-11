#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=0,s,r;
	while(n>10){
		s=0;
		k=0;
		while(n)
		{
			r=n%10;
			s=s+r*r;
			n=n/10;
			k=k+1;
		}
		n=s;
	}
	if(s==1)
	{
		cout<<"happy";
	}
	else{
		cout<<"no";
	}
}

