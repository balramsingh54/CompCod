#include <iostream>
using namespace std;
/*
AAAAA
BBBB
CCC
DD
D
*/

int main(int argc, char const *argv[])
{
	int size;
	cin>>size;

	for (int i = size; i >= 0 ; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			cout<<char (65+i);
		}
		cout<<endl;
	}
	return 0;
}