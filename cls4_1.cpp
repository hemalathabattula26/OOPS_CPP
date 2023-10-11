#include<iostream>
using namespace std;
class Student{
	public:
		string name,rollno;
		Student(){
			name="Gayathri";
			rollno="66988";
			cout<<"const1"<<endl;
		}
		Student(string name,string rollno){
			this->name=name;
			this->rollno=rollno;
			cout<<"const2"<<endl;
		}
		Student(Student &s){             //copy constructor 
			this->name=s.name;
			this->rollno=s.rollno;
			cout<<"const3"<<endl;
		}
		inline void display(){           //inline function
			cout<<name<<" "<<rollno<<endl;
		}
};
int main(){
	Student s1,s2;
	Student s3("Gaay","124");
	Student s4(s3);
	s1.display();
	s2.display();
	s3.display();
	s4.display();
}
