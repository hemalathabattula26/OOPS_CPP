#include<bits/stdc++.h>
using namespace std;
int64_t fastpower(int64_t a, int64_t b){
	//base case
	if(b==0)return 1;
	//rec
	int64_t sub=fastpower(a,b/2);
	//cru
	if(b&1){
		return a*sub*sub;
	}
	else{
		return sub*sub;
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fastpower(a,b);
}