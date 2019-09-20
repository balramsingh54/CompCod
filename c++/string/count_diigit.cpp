#include <iostream>
#include <string>
using namespace std;

int total_digit(string str)
{
	int count=0;
	for (int i = 0; i < str.length(); i++)
	{
		if ('0' <=str[i] and str[i]<= '9')
		{
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	string str="sdf234h6j12dsvsd  fe3";
	cout<<total_digit(str);
	return 0;
}