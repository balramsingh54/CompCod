#include <iostream>
using namespace std;

class A
{
protected:
	int a;
public:
	void get_a(int n)
	{
		a=n;
	}
};

class B
{
protected:
	int b;
public:
		void get_b(int n)
		{
			b=n;
		}
};

class C : public A, public B
{
public:
	void display()
	{
		cout<<"the value of a is :"<<a<<endl;
		cout<<"the value of b is :"<<b<<endl;
		cout<<"the sum  of a and b is :"<<a+b<<endl;
	}
};


int main(int argc, char const *argv[])
{
	C c1;

	c1.get_a(10);
	c1.get_b(20);
	c1.display();



	return 0;
}