// incomplete code or runnig is error

#include <iostream>
using namespace std;

bool checkPrime(int n)
{
	bool isprime;
	for (int i = 2; i <= n/2; i++)
	{
		if (n%i==0)
		{
			isprime=false;
			break;
		}
	}
	return isprime;

}

int main(int argc, char const *argv[])
{
	int n;
	for (int i = 2; i < n; i++)
	{
		if (checkPrime(i))
		{
			if (checkPrime(n-i))
			{
				cout<<" 1st number are is "<<i<<"2nd number is "<<n-i;
			}

		}
	}
	return 0;
}