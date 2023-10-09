#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	float k,l;
	cin>>a>>b>>c;
	int p;
	p=(b*b)-(4*a*c);
	if(p==0){
		cout<<(-1*(b)/(2*a));
	}
	else if(p>0){
		k=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
		l=(-b-(sqrt((b*b)-(4*a*c))))/(2*a);
		cout<<k<<" "<<l;
	}
	else{
		cout<<(-b/(2*a))<<" "<<(sqrt(-p)/(2*a));
	}
}