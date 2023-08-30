// #include<bits/stdc++.h>
// using namespace std;
// class humanbeing
// {
// protected:
// 	int age;
// 	string name;
// public:
// 	void setname(string myname)
// 	{
// 		name=myname;
// 	}
// 	void setage(int val)
// 	{
// 		age=val;
// 	}

// };
// class student:public humanbeing
// {
// public:
// 	int id;
// 	void setid(int val)
// 	{
// 		id=val;
// 	}
// 	void display()
// 	{
// 		cout<<name<<" "<<age<<" "<<id<<endl;
// 	}
// 	void setdata(string name,int val,int data)
// 	{
// 		name=myname;
// 		age=val;
// 		id=data;
// 	}
	
// };
// int main()
// {
// 	student hema;
// 	hema.id=28139;
// 	hema.setname("Hema");
// 	hema.setage(19); 
// 	hema.display();
// }
#include<bits/stdc++.h>
using namespace std;
class humanbeing
{
protected:
	int age;
	string name;
public:
	void setname(string myname)
	{
		name=myname;
	}
	void setage(int val)
	{
		age=val;
	}

};
class student:public humanbeing
{
public:
	int id;
	void setid(int val)
	{
		id=val;
	}
	void display()
	{
		cout<<name<<" "<<age<<" "<<id<<endl;
	}
	void setdata(string myname,int val,int data)
	{
		name=myname;
		age=val;
		id=data;
	}
	
};
int main()
{
	student hema;
	hema.id=28139;
	hema.setname("Hema");
	hema.setage(19); 
	hema.display();
}