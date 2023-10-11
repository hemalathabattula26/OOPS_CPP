#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=1,b=1,r,q,z,i;
	cin>>n;
	int m=n;
	int l=m/10;
	if(m%10 > l%10)
	{
		m=m/10;
	while(m){
		r=n%10;
		q=m%10;
		n=n/10;
		m=m/10;
		i=i+1;
		if(r<=q and i%2!=0)
		{
			a=0;
			break;
		}
		else if(r>=q and i%2==0)
		{
			a=0;
			break;
		}
	}
	if(a==0)
	{
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
}
	else{
		m=m/10;
		while(m){
		r=n%10;
		q=m%10;
		n=n/10;
		m=m/10;
		z=z+1;
		if(r>=q and z%2!=0)
		{
			b=0;
			break;
		}
		else if(r<=q and z%2==0)
		{
			b=0;
			break;
		}
	}
	if(b==0)
	{
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
}
}
