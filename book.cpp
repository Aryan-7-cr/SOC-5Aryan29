#include<iostream>
#include<string>
using namespace std;

class Book
{
	public:
	int book_id;
	string book_name;

	void display()
	{
		cout<<" Book name is: "<<book_name<<endl;
		cout<<" Book id is: "<<book_id<<endl;
	}

	Book(int b_id, string b_n)
	{
		book_id=b_id;
		book_name=b_n;
	}

	Book(Book &b)
	{
		book_id=b.book_id;
		book_name=b.book_name;
	}

};

int main()
{
	Book b1(984, "King");
	Book b2(b1);
	b1.display();
	b2.display();
	return 0;
}
