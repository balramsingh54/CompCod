#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x=10;
	cout<<&x<<endl;
	int* xptr=&x;
	cout<<xptr<<endl;
	cout<<*xptr;


	return 0;
}