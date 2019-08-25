#include <iostream>
using namespace std;

int increment(int *a)
{
	*a=*a+1;
	return *a;
}

int main(int argc, char const *argv[])
{
	int a=10;
	cout<<increment(&a);
	// int x=10;
	// int &z=x;
	// cout<<x<<endl;
	// cout<<&z;
	return 0;
}