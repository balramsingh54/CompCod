#include <iostream>
#include <cmath>
using namespace std;

void swap(int arr[], int i, int j)
{
	int temp= arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void display(int arr[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<", ";
	}
}

int main(int argc, char const *argv[])
{
	int arr[5]={5,7,3,1,0};
	display(arr, 5);
	cout<<endl;
	cout<<"********initially*******"<<endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				swap(arr, j, j+1);
			}
			display(arr, 5);
			cout<<endl;
		}
	}
	//    function call 
	cout<<"*******finally sorted********"<<endl;
	display(arr, 5);

	return 0;
}