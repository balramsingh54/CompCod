#include <iostream>
#include <string>
using namespace std;


void remove_duplicate(string str)
{
	char arr[str.length()];
	arr[0]=str[0];

	for (int i = 1; i < str.length(); i++)
	{
		for (int j = 1; j < str.length(); j++)
		{
			if (str[i]!=arr[j])
			{
				arr[j]=str[i];
				break;
			}
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		cout<<arr[i];
	}
}

int main(int argc, char const *argv[])
{
	string str;
	getline(cin, str);

	remove_duplicate(str);
	return 0;
}