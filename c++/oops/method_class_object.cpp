#include <iostream> 
using namespace std; //   Initialize and display data through method 

class student
{
public:
	int id; // data member and instance variable
	string name; // daata member and instance variable 


	void insert(int id, string name) //  member fuction 
	{
		this->id=id;
		this->name=name;
	}

	void display()  // member function 
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