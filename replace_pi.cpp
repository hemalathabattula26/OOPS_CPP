#include<bits/stdc++.h>
using namespace std;
void pie(int i,char* s)
{
	if(s[i]=='\0' or s[i+1]=='\0'){
		return ;
	}
	if(s[i]=='p' and s[i+1]=='i')
	{
		int j=i+2;
		while(s[j]!='\0') j++;
		while(j>=i+2){
		s[j+2] = s[j];
		j--;
        }
        s[i]='3';
        s[i+1]='.';
        s[i+2]='1';
        s[i+3]='4';
        pie(i+4,s);
	}
	pie(i+1,s);
}
int main()
{
	char s[1000];
	cin>>s;
	pie(0,s);
	cout<<s;
}
