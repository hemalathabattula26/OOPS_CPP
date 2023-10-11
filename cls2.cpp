/*#include<iostream>
using namespace std;
class class_name{
	public:
		string name="Hema",rollno="22A91A05A6",branch="CSE",college="AEC";
		int phno=9876543210,bc=0;
		double cgpa=8.9;
};
int main()
{
	class_name s1,s2;
	cout<<s1.name<<endl<<s1.bc<<endl<<s1.branch<<endl<<s1.cgpa<<endl<<s1.college<<endl<<s1.phno<<endl/<<s1.rollno<<endl;
	return 0;
}*/
#include<iostream>
using namespace std;
class student{
	public:
		static string eduins,course;
		string name,rollno,branch,college;
		int phno,bc;
		float per;
	student(string n,string r,string b,string c,int p,int bc,float pe);
//	{
//		name=n;
//		rollno=r;
//		branch=b;
//		college=c;
//		phno=p;
//		bc=bc;
//		per=pe;
//	}
	void display();
//{
//	    cout<<rollno<<" "<<name<<" "<<phno<<endl;
//	    cout<<branch<<" "<<college<<" "<<bc<<" "<<per<<endl;
// } 	
};

string student::eduins="Aditya";
string student::course="cpp";
void student::display()
{
	cout<<rollno<<" "<<name<<" "<<phno<<" "<<&phno<<endl;
    cout<<branch<<" "<<college<<" "<<bc<<" "<<per<<" "<<eduins<<" "<<&eduins<<" "<<course<<endl;
}

student::student(string n,string r,string b,string c,int p,int bc,float pe)
{
	this->name=n;
	this->rollno=r;
	this->branch=b;
	this->college=c;
	this->phno=p;
	this->bc=bc;
	this->per=pe;
}
int main()
{
	student s1("Hema","22A91A05A6","CSE","AEC",9870,0,8.96);
	s1.display();
	student s2("mee","22A91A05A16","CSE","AEC",9345,0,8.96);
	s2.display();
	return 0;
}
