#include <iostream>
using namespace std;

void reverse_string(string str)
{
	int temp;
	int s=0;
	int e=str.length()-1;
	int arr[str.length()];
	while(s<=e)
	{
		temp=str[s];
		str[s]=str[e];
		str[e]=temp;
		s++;
		e--;
	}

	for (int i = 0; i < str.length(); i++)
	{
		arr[i]=str[i];
		cout<<str[i];

	}
}

int main(int argc, char const *argv[])
{
	string str ="Balram";

	reverse_string(str);
	return 0;
}