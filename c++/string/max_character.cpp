#include <iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
	string str= "aavakdsfab";
	int freq[256]={0};
	for (int i = 0; i < str.length(); i++)
	{
		char ch= str[i];
		freq[ch]++;		
	}
int max = INT_MIN;
	for (int i = 0; i < 256; i++)
	 {
	 	if (max<freq[i])
	 	{
	 		max=freq[i];
	 	}
	 }
	 cout<<max;

	return 0;
}