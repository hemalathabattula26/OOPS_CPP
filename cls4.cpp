#include<iostream>
using namespace std;
class Student{
	public:
	string name,roll;
	Student()
	{
		name="Hema";
		roll="12345";
	}
	Student(string name,string roll)
	{
		this->name=name;
		this->roll=roll;
	}
	Student(Student &s)
	{
		this->name=s.name;
		this->roll=s.roll;
		
	}
	void display()
	{
		cout<<name<<" "<<roll<<" "<<endl;
	}
};

int main()
{
	Student s1,s2;//default constructor
	Student s3("Nan","45");//parametrized constructor
	Student s4(s3);//copy constructor
	s1.display();
	s2.display();
	s3.display();
	s4.display();
}
