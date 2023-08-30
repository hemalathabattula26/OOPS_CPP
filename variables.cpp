#include<bits/stdc++.h>
using namespace std;
class humanbeing
{
public:
	static int human_count;
	int data=0;
	public:

	humanbeing()
	{
		human_count++;
	}
	static void display()	
	{
		cout<<"Human Count is "<<human_count<<endl;
	}
	void get()
	{
		cout<<"Human Count is "<<data<<endl;
	}
};
int humanbeing::human_count=0;
int main()
{
	humanbeing hema;
	humanbeing ded;
	hema.display();
	hema.get();
	ded.display();
	ded.get();
	return 0;
}
