#include <iostream>
using namespace std;

void reverse()
{
	string str="Balram";
	int left=0;
	int size= str.length();
	int right=size-1;
	while(left<right)
	{
		char ch=str[left];
		str[left]=str[right];
		str[right]=ch;
		left++;
		right--;
	}
	cout<<str;

}

bool isPalindrome()
{
	string str="na";
	int left=0;
	int right= str.length()-1;
	if (str[left]!=str[right])
	{
		return false;
	}
	return true;
}

char maxCharacter()
{
	
}

int main(int argc, char const *argv[])
{

	reverse();
	cout<<endl;
	cout<<isPalindrome();
	return 0;
}