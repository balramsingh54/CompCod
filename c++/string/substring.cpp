#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str="Hello";
	cout<<str.substr()<<endl;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = i; j < str.length()+1; j++)
		{
			cout<<str.substr(i, j)<<endl;
		}
	}


	return 0;
}