#include <iostream>
#include <string>
using namespace std;

string remove_space(string str)
{
	char space=' ';
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i]==space)
		{
			return str.substr(0, i);
		}
	}
}

int main(int argc, char const *argv[])
{
	string str;
	getline(cin, str);
	cout<<remove_space(str);
	return 0;
}