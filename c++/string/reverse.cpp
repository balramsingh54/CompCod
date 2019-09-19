#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[5]= {1,2,3,4,5};
	int s=0;
	int e=4;
	int temp;
	int brr[5]={0};
	while(s<=e)
	{
		temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}

	for (int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}