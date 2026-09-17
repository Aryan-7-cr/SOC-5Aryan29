#include<iostream>
#include<string>
using namespace std;
class Student
{
        public:
	string name;
	int rollno;
	float marks;
       
      void accept()
   {
	cout<<"Enter Name: ";
	cin>>name;

	cout<<"Enter Roll no: ";
        cin>>rollno;

	cout<<"Enter Marks: ";
        cin>>marks;
   }

      void Result()
     {
	if(marks>=35)
      {
	cout<<"PASS";
      }
      else
      {
        cout<<"FAIL";
      }
     }
     
	void display()
    {
	cout<<"/nStudent Details ";

	cout<<"Name of the Student: "<<name;

	cout<<"Roll no. : "<<rollno;

	cout<<"Marks: "<<marks;

	Result();
      }
     };


 int main()
  {
	Student s;
	s.accept();
	s.display();
    return 0;
  }

