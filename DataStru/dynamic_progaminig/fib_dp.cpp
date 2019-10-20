#include <iostream>
using namespace std;

int fib(int n)
{
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	int ans= fib(n-1)+fib(n-2);
	return ans;
}


int fib_DP(int n)
{
	int MEMO[n+1];
	MEMO[0]=0;
	MEMO[1]=1;
	for (int i = 2; i <= n; i++)
	{
		MEMO[i] = MEMO[i-1]+ MEMO[i-2];
	}
	return MEMO[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	//cout<<fib(n);

	cout<<fib_DP(n);
	return 0;
}