#include<bits/stdc++.h>
using namespace std;
int FindAllWays(int n){
	if(n==0)return 1;
	int vert=0,horiz=0;
	vert=FindAllWays(n-1);
	if(n>=4){
		horiz=FindAllWays(n-4);
	}
	return vert+horiz;
}
int main()
{
	int n;
	cin>>n;
	cout<<FindAllWays(n);
}
