#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
	string name;
	int empid;
	float basicsal;
	float bonus;
	float totalsal;
	
	public:
	Employee()
	{
		name="unknown";
		empid=0;
		basicsal=0;
		bonus=0;
		totalsal=0;
	}

	Employee(string n,int id,float s,float b)
	{
		name=n;
		empid=id;
		basicsal=s;
		bonus=b;
	
	}
	void calculate()
	{
		totalsal=basicsal+bonus;
	}
        
	void display()
	{
		cout<<"Employee name is: "<<name<<endl;
		cout<<"Employee id: "<<empid<<endl;
		cout<<"Employee salary: "<<basicsal<<endl;
		cout<<"Employee bonus: "<<bonus<<endl;
		cout<<"EMployee total salary: "<<totalsal<<endl;
	}
};

int main()
{
	Employee e;
	e.display();
	
	Employee e2("King",545,150000,20000);
	e2.display();
	
	return 0;
}


		
