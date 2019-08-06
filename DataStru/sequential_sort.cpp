#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, value, location=0;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	cin>>value;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==value)
		{
			location=i;
		}

	}
	if (location)
		{
			cout<<"found at position :"<<location+1;
		}
	else
	{
		cout<<"Not found ";
	}
	return 0;
}