#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			cout<<" "<<" ";
		}

		for (int k = 0; k < i+1; k++)
		{
			cout<<"*"<<" ";
		}
		for (int l = 1; l < i+1; l++)
		{
			cout<<"*"<<" ";
		}

		for (int m = 0; i < count; ++i)
		{
			/* code */
		}

		cout<<endl;
	}
	return 0;
}