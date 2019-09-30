#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	cin>>a>>b;
	int* x=&a;
	int* y=&b;
	int z= *x + *y;

	cout<<"sum is "<<z;;

	return 0;
}