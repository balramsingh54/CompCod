#include <iostream>
using namespace std;

int calculator(int a, int b)
{
	char optr;
	cout<<"enter operator"<<endl;
	cin>>optr;
	
	switch(optr)
	{
		case '+':
			return a+b;
			break;

		case '-':
			return a-b;
			break;

		case '*':
			return a*b;
			break;

		case '/':
			return a/b;
			break;
	}

}

int main(int argc, char const *argv[])
{
	
	int a , b;
	cin>>a>>b;
	cout<<calculator(a, b);
	return 0;
}