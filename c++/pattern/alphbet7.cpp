#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int temp=97;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout<<char(temp+i)<<" ";
		}
		cout<<endl;
	}

	return 0;
}