#include<bits/stdc++.h>
using namespace std;
class humanbeing
{
private:
	string name;
	int age;
public:
	humanbeing(string word,int val){
		name=word;
		age=val;
	}
	friend void display(humanbeing hema);
	//friend class student
	
};
void display(humanbeing hema)
{
	cout<<hema.name<<endl;
}
int main()
{
	/* code */
	humanbeing hema("Hema",18);
	display(hema);
	return 0;
}