#include <iostream>
#include <string>
using namespace std;

int totao_space(string str)
{
	int count=0;
	int max= str.length();
	char space =' ';

	for (int i = 0; i <max-1 ; i++)
	{
		if (str[i]==space)
		{
			count++;
		}
			}
	return count;
}

int main(int argc, char const *argv[])
{
	string str;
	getline(cin, str);

	cout<<totao_space(str);
	
	return 0;
}