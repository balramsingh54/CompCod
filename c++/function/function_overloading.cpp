#include <iostream>
using namespace std;

void display(int a)
{
	cout<<a<<endl;
}
int display(float b)
{
	return b;
}
void display(char c)
{
	cout<<c<<endl;
}

int main(int argc, char const *argv[])
{
	int a=3;
	int b=5.5;
	char d='c';
	display(a);
	display(b);
	display(d);
	return 0;
}