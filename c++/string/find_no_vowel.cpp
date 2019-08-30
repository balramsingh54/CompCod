#include <iostream>
using namespace std;

int total_dif_form()
{
	string str= "I am 456 good 120 Boy";
	int vowel=0;
	int cnstt=0;
	int space=0;
	int digit=0;

	for (int j = 0; j < str.length(); j++)
	{
		if (str[j]=='a' or str[j]=='e' or str[j]=='i' or str[j]=='o'
			or str[j]=='u' or str[j]=='A' or str[j]=='E' or str[j]=='I' 
			or str[j]=='O' or str[j]=='U')
		{
			vowel++;
		}
		else if ('0' <= str[j] and str[j] <= '9')
		{
			digit++;
		}
	}
	return digit ;

}

int main(int argc, char const *argv[])
{
	cout<<total_dif_form();
	return 0;
}