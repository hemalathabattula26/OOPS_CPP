#include<bits/stdc++.h>
using namespace std;
int power(int64_t a, int64_t b){
	//base case
	if(b==0)return 1;
	//rec
	int64_t sub=power(a,b-1);
	//cru
	int64_t cur=a*sub;
	return cur;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
}