#include <iostream> 
using namespace std; //   Initialize and display data through method 

class student
{
public:
	int id;
	string name;


	void insert(int id, string name)
	{
		this->id=id;
		this->name=name;
	}

	void display()
	{
		cout<<"id is "<<id<<",  and name is  "<<name<<endl;
	}
	
};

int main(int argc, char const *argv[])
{
	student s1, s2;
	// string ba="Balram";
	// string ja="Jaiprakash";
	s1.insert(1, "Balram");
	s2.insert(2, "Jaiprakash");
	s1.display();
	s2.display();


	return 0;
}