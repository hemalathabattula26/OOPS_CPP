////#include<bits/stdc++.h>
////using namespace std;
////int main()
////{
////	int i=0,j=0,n;
////	cin>>n;
////	while(i<=n)
////	{
////		cout<<"*"<<" ";
////		j++;
////		if(j==n-1){
////			i++;
////			j=0;
////			cout<<endl;
////		}
////	}
////}
//
//
//
//
////#include<bits/stdc++.h>
////using namespace std;
////int main()
////{
////	int i=1,j=0,n;
////	cin>>n;
////	while(i<=n)
////	{
////		cout<<"*"<<" ";
////		j++;
////		if(j==i){
////			i++;
////			j=0;
////			cout<<endl;
////		}
////	}
////}
//
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int i,j=0,n;
//	cin>>n;
//	i=n;
//	while(i>0)
//	{
//		cout<<"*"<<" ";
//		j++;
//		if(j==i){
//			i--;
//			j=0;
//			cout<<endl;
//		}
//	}
//}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j=0,n;
	cin>>n;
	while(i<=n)
	{
		if(j==n-1){
			i++;
			j=0;
			cout<<endl;
		}
		else if(j<i)
		{
			j++;
			cout<<" ";
		}
		else
		{
			j++;
			cout<<"*";
		}
	}
}
