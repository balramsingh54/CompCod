#include <iostream>
#include <string>
#include <climits>
using namespace std;

int max_char(string str)
{
	int freq[256]={0};
	char ch;
	for (int i = 0; i < str.length(); i++)
	{
		ch= str[i];
		freq[ch]++;
		cout<<freq[ch];
	}
	int max=INT_MIN;
	for (int i = 0; i < 256; i++)
	{
		if (max<freq[i])
		{
			max=freq[i];
		}

	}
	return max;

}

int main(int argc, char const *argv[])
{
	string str = "aaabbsfg";
	cout<<max_char(str);
	return 0;
}