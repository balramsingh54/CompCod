#include <iostream>
using namespace std;

class animal
{
public:
	void eat()
	{
		cout<<"eating....."<<endl;
	}
};

class cat: public animal
{
public:
	void mew()
	{
		cout<<"mewing....... ";
	} 
};

int main(int argc, char const *argv[])
{
	cat ct1;
	ct1.eat();
	ct1.mew();

	return 0;
}