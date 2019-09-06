#include <iostream>
using namespace std;

class car
{
public:
	int add(int a, int b)
	{
		return a+b;
	}

	int add(int a, int b, int c)
	{
		return a+b+c;
	}
};

int main(int argc, char const *argv[])
{
	car cr1;
	cout<<cr1.add(10, 20);
	cout<<endl;
	cout<<cr1.add(10, 20,30);

	return 0;
}