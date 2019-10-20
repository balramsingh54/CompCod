#include <iostream>
using namespace std;

int max_cost(int arr[], int s, int e)
{
	int price = 0;
	for (int i = 1; i <= 4; i++)
	{
		if (arr[s]<arr[e])
		{
			price = price + arr[s]*i;
			s++;
		}
		else
		{
			price = price + arr[s]*i;
			e--;
		}
	}
	return price;
}

int main(int argc, char const *argv[])
{
	
	//int v1=1, v2=3, v3=2, v4=4;
	int arr[4]={1, 3, 2, 4};
	int s=0;
	int e=3;
	cout<<max_cost(arr, s, e);

	return 0;
}