#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string str="INDIA";

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout<<str[j];
		}
		cout<<endl;
	}
	return 0;
}