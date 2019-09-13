#include <iostream>
using namespace std;

string removeDuplicate(string str){
	if(str.length()==0){
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);
	string recursion_result = removeDuplicate(ros);

	if(ch==recursion_result[0]){
		return recursion_result;
	}

	return ch + recursion_result;
}

int main(int argc, char const *argv[])
{
	string str ="AAAaaaabbbBBxxxccc";
	cout<<removeDuplicate(str);
	
	return 0;
}