#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i+1; j--)
		{
			cout<<" ";
		}
		for (int k = 0; k < i+1; k++)
		{
			cout<<i+1<<" ";
		}

		cout<<endl;
	}
	return 0;
}