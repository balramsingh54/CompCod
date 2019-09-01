#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	 int size;
	 cin>>size;

	 for (int i = 0; i < size; i++)
	 {
	 	for (int j = 0; j < i+1; j++)
	 	{
	 		cout<<char(65+j);
	 	}
	 	for (int j = size-1; j <= 0; j--)
	 	{
	 		cout<<char(65+j);
	 	}
	 	cout<<endl;
	 }
	 
	return 0;
}