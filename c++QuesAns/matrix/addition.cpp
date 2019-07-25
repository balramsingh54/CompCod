#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int A[10][10], B[10][10], C[10][10], r, c;
	cout<<"Enter row of A matrix : "<<endl;
	cin>>r;
	cout<<"Enter row of B matrix : "<<endl;
	cin>>c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<"Enter the value of "<<i+1<<", "<<j+1<<endl;
			cin>>A[i][j];
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<"Enter the value of "<<i+1<<", "<<j+1<<endl;
			cin>>B[i][j];
		}
	}
// Initialisation of matrix of c ---------
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			C[i][j]=0;
		}
	}

// addition of two matrix ---------------	
	for (int i = 1; i < r+1; i++)
	{
		for (int j = 1; j < c+1; j++)
		{
			C[i][j]=A[i][j]+B[i][j];		
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}