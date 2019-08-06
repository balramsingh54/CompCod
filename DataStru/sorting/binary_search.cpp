#include <iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int value)
{
	int ans;
	int mid=(s+e)/2;
	if (arr[mid]==value)
	{
		return mid;
	}
	else if (value>arr[mid])
	{
		e=mid-1;
		ans=binary_search(arr, s, e, value);
		return ans;
	}
	else
	{
		s=mid+1;
		ans=binary_search(arr, s, e, value);
		return ans;
	}
}

int main(int argc, char const *argv[])
{
	int size, s, e, value;
	// cin>>size;
	int arr[5]={1,2,3,4,5};
	cout<<"enter value : "<<endl;
	cin>>value;
	s=arr[0];
	e=arr[4];
	cout<<binary_search(arr, 0, e, value);
	return 0;
}