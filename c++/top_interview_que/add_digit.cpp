#include <iostream>
using namespace std;

int addDigit(int arr[], int size)
{
	int sum=0;

	for (int i = 0; i < size; i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int arr[5]={1,2,3,4,5};
	cout<<addDigit(arr, 5)<<endl;

	return 0;
}