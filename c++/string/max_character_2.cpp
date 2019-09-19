#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


int max_character(string str)
{
	int freq[256]={0};
	char ch;
	for (int i = 0; i < str.length(); ++i)
	{
			ch=str[i];
			freq[ch]++;
			cout<<freq[ch];
	}
	cout<<endl;
	cout<<endl;

	int max= INT_MIN;
	for (int i = 0; i < 256; i++)
	{
		if (max<freq[i])
		{
			max=freq[i];
		}
		cout<<freq[i];
	}
	return max;

}

int main(int argc, char const *argv[])
{
	string str;
	getline(cin, str);
	cout<<endl;
	cout<<endl;
	cout<<max_character(str);

	return 0;
}