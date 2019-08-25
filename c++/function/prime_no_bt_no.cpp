#include <iostream>
using namespace std;

int CheckPrimeNo(int n)
{
	bool flag;
	for (int i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			flag=0;
			break;
		}
		if (flag==1)
		{
			return n;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n1, n2;
	bool flag;
	cin>>n1>>n2;
	for (int i = n1; i <= n2; i++)
	{
		flag=CheckPrimeNo(i);
		if (flag)
		{
			cout<<i<<", ";
		}
	}



	return 0;
}