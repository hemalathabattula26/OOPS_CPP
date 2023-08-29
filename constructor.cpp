#include<bits/stdc++.h>
using namespace std;
class humanbeing
{
public:
	private:
		string name;
		int age;
	public:
		humanbeing(){
			name="NO name";
			age=0;
		}
		humanbeing(string word,int val)
		{
			name=word;
			age=val;
		}
		humanbeing(string word)
		{
			name=word;
			age=0;
		}
		humanbeing(int val)
		{
			name="No name";
			age=val;
		}
		humanbeing(humanbeing &kavya)
		{
			name=kavya.name;
			age=kavya.age;
		}
		void display()
		{
			cout<<"i am "<<name<<" with age "<<age<<endl;
		}
};
int main()
{
	humanbeing hema("Hema",19);
	humanbeing Nani("Nani");
	humanbeing Meena(18);
	humanbeing Megna;
	humanbeing kavya(hema);
	hema.display();
	Nani.display();
	Meena.display();
	Megna.display();
	kavya.display();
	
}