#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			cout<<" "<<" ";
		}

		for (int k = n; k >i ; k--)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}

	return 0;
}