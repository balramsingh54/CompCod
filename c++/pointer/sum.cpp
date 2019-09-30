#include <iostream>
using namespace std;

int sum(int* a, int* b)
{
	int* xptr= a;
	int* yptr= b;
	int zptr= *xptr + *yptr;
	return zptr;
}

int main(int argc, char const *argv[])
{
	int x=10;
	int y=20;
	cout<<sum(&x, &y)<<endl;
	
	return 0;
}