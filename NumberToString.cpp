#include<bits/stdc++.h>
using namespace std;
char words[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void fun(int n)
{
	if(n==0){
		return;
	}
	int r;
	fun(n/10);
	r=n%10;
	cout<<words[r]<<" ";
}
int main()
{
	int n;
	cin>>n;
	fun(n);
}