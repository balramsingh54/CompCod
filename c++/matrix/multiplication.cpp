#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int A[10][10], B[10][10], C[10][10], r1, c1, r2,c2;
	cout<<"Enter row and column of A matrix : "<<endl;
	cin>>r1>>c1;
	cout<<"Enter row and column of B matrix : "<<endl;
	cin>>r2>>c2;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cout<<"Enter the value of "<<i+1<<", "<<j+1<<endl;
			cin>>A[i][j];
		}
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cout<<"Enter the value of "<<i+1<<", "<<j+1<<endl;
			cin>>B[i][j];
		}
	}
// Initialisation of matrix of c ---------
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			C[i][j]=0;
		}
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			for (int k = 0; k < c1; k++)
			{
				C[i][j]=C[i][j]+ A[i][k]*B[k][j];
			}
		}
	}

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}