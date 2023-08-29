#include<bits/stdc++.h>
using namespace std;
class humanbeing
{
public:
	string name;
	void introduce();
void display()
{
	cout<<name<<endl;
}
};
void humanbeing::introduce()
{
	cout<<"hi i am "<<humanbeing::name<<endl;
}
int main()
{
	humanbeing hema;
	hema.name="Hema";
	hema.display();
	hema.introduce();
	humanbeing *nan=new humanbeing();
	nan->name="Nan";
	nan->display();
	nan->introduce();
	humanbeing *mee = &hema;
	mee->display();
}