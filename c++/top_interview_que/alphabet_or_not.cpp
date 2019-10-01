#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char n;
	cin>>n;
	if ('a'<=n and n>='z'  or 'A'<=n and n>='Z')
	{
		cout<<"this is alphbet:";
	}

	else
	{
		cout<<"this is not alphbet";
	}

	return 0;
}