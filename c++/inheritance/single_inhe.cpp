#include <iostream>
using namespace std;

class person
{
public:
	int salery=30000;
};

class customer: public person
{
public:
	float bonus = 4500;
};

int main(int argc, char const *argv[])
{
	customer cu1;
	cout<<"salery is:  "<<cu1.salery<<endl;
	cout<<"bonus is :"<<cu1.bonus;

	return 0;
}