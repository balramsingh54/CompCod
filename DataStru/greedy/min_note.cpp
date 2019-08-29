#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[]={1,2,5,10,20,50,100,200,500,2000};
	int money;
	cin>>money;
	int count=0;
	while(money>0)
	{
		int i=0;
		for ( i = 0; i < 10; i++)
		{
			if (arr[i]>money)
			{
				money=money-arr[i-1];
				cout<<arr[i-1]<<endl;
				count++;
				break;
			}
		}
		if (i==10)
		{
			money=money-arr[i-1];
			cout<<arr[i-1];
			cout<<endl;
			count++;
		}
	}
	cout<<endl;
	cout<<count;


	return 0;
}