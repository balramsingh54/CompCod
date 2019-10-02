#include <iostream>
using namespace std;

bool reverseIsEquall(string arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]==arr[size-1-i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main(int argc, char const *argv[])
{
	cout<<reverseIsEquall("naya", 5);

	return 0;
}