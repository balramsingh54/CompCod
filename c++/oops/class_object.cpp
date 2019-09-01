// object and class method 
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	class student
	{
	public:
		int id;
		string name;
		float salery;
	};

	student s1;
	s1.id=1;
	s1.name="Balram";
	s1.salery= 30000;

	cout<<s1.id<<endl;
	cout<<s1.name<<endl;
	cout<<s1.salery;

	return 0;
}