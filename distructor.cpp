#include<bits/stdc++.h>
using namespace std;
class humanbeing
{
private:
	string *name;
	int *age;
public:
	humanbeing(string word="No name",int val=0)
	{
		name= new string;
		age=new int;
		*name=word;
		*age=val;
	}
	~humanbeing()
	{
		delete name;
		delete age;
	}
};
int main()
{
	humanbeing *hema=new humanbeing();
	delete hema;
	return 0;
}