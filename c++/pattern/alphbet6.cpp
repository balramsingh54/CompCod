#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}