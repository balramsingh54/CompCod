#include <iostream>
using namespace std;

int sequential_search(int arr[], int size, int value)
{
	// int count=0;
	// while(count!=size){
	// 	if (arr[count]==value)
	// 	{
	// 		return count+1;		 
	// 	}
	// }
	// return -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]==value)
		{
			return i+1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int size, value;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter value :"<<endl;
	cin>>value;
	cout<<sequential_search(arr, size, value);
	return 0;
}