#include <bits/stdc++.h>
using namespace std;
class humanbeing
{
private:
	int age;
	string name;
public:
	void setdata(int val,string word)
	{
		age=val;
		name=word;
	}
	void getdata()
	{
		cout<<"hi i am "<<name<<". my age is "<<age<<endl;
	}
};
int main()
{
	humanbeing hem;
	hem.setdata(19,"Hema");
	hem.getdata();
	return 0;
}