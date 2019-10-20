#include <iostream>
using namespace std;

int count=0;

int ReduceToOne(int n)
{
	if (n==1)
	{
		return 0;
	}

	else if (n%3==0)
	{
		count++;
		ReduceToOne(n/3);
	}
	
	else if (n%2==0)
	{
		count++;
		ReduceToOne(n/2);
	}
	else
	{
		n=n-1;
		count++;
		ReduceToOne(n-1);
	}
	return count;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<ReduceToOne(n);
	return 0;
}