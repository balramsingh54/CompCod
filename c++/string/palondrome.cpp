#include <iostream>
using namespace std;

void ispalindrome(string str)
{
	bool flag=0;
	int s=0;
	int e=str.length()-1;
	while(s<=e)
	{
		if (str[s]!=str[e])
		{
			//cout<<"This is not palindrome:";
			flag=1;
			break;
		}
		s++;
		e--;
	}
	if (flag==1)
	{
		cout<<"this is not palindrome:";
	}
	else
	{
		cout<<"this is palindrome:";
	}

}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	ispalindrome(str);

	return 0;
}