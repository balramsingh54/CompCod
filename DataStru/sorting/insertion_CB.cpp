#include<iostream>
#include <climits>

using namespace std;

void swap(int arr[],int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){

	int arr[] = {5,3,2,1,4};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j < 0; j--)
		{
			if (arr[j]>arr[j-1])
			{
				swap(arr, j, j-1);
			}
		}
	}


	return 0;
}