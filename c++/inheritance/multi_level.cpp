#include <iostream>
using namespace std;

class animal
{
public:
	void eat()
	{
		cout<<"eating...."<<endl;
	}
};

class dog: public animal
{
public:
	void bark()
	{
		cout<<"barking...."<<endl;
	}
};

class babydog: public dog
{
public:
	void weep()
	{
		cout<<"weeping...";
	}
};

int main(int argc, char const *argv[])
{
	babydog bd1;

	bd1.weep();
	bd1.bark();
	bd1.eat();

	return 0;
}