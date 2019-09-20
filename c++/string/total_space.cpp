#include <iostream>
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
	char str[100]={0};
	cin.getline(str, 100);


	
	return 0;
}