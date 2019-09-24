#include <iostream>
#include <string>
using namespace std;

void remove_space(string str)
{

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i]==' ')
		{
			for (int j = i; j < str.length(); j++)
			{
				str[j]=str[j+1];
			}
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		cout<<str[i];
	}
}

int main(int argc, char const *argv[])
{
	string str;

	getline(cin, str);
	remove_space(str);
	return 0;
}