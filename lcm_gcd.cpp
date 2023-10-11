//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int m,n,i,k=1;
//	cin>>n>>m;
//	int r=n,q=m;
//	for(i=1;i<=m&&i<=n;i++)
//	{
//		if(n%i==0&&m%i==0)
//		{
//			k=i;
//		}
//	}
//	m=m/k;
//	n=n/k;
//	k=k*m*n;
//	cout<<"LCM:"<<k<<endl;
//	cout<<"GCD:"<<(r*q)/k;
//}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,k=1;
	cin>>n>>m;
	int r=n,q=m;
	for(i=2;i<=m&&i<=n;i++)
	{
		if(n%i==0&&m%i==0)
		{
			k*=i;
			m=m/i;
			n=n/i;
			i=i-1;
		}
		else
		{
			i++;
		}
	}
	k=k*m*n;
	cout<<"LCM:"<<k<<endl;
	cout<<"GCD:"<<(r*q)/k;
}
