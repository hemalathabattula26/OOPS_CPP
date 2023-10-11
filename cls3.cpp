#include<iostream>
using namespace std;
class college{
	public:
		static string program;
		string name,regulation;
		double avg_pac;
		float rating;
		int campus_count;
	college(string n,string r,double avg,float ra,int cou);
	static void display_static()
	{
		cout<<program<<endl;
	}
	void display();
	
};
string college::program="Btech";
void college::display()
{
	cout<<name<<" "<<regulation<<" "<<avg_pac<<" "<<rating<<" "<<campus_count<<endl;
}
college::college(string n,string r,double avg,float ra,int cou)
{
	this->name=n;
	this->regulation=r;
	this->avg_pac=avg;
	this->rating=ra;
	this->campus_count=cou;
}
int main()
{
	college c1("AEC","AR20",6.54345,4.5,3);
	c1.display();
	c1.display_static();
	college c2("AECO","AR21",5.55,3.5,1);
	c1.display();
	c2.display_static();
}
