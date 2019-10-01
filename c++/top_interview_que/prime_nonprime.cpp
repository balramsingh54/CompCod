#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int no;
	bool flag;
	cin>>no;
	for (int i = 2; i < no; i++)
	{
		if (no%i==0)
		{
			flag=1;
			break;
		}
	}

	if (flag==1)
	{
		cout<<"this is not prime ";
	}
	else
	{
		cout<<"this is prime";
	}
	return 0;
}