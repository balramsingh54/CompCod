#include <iostream>
#include <cmath>
using namespace std;

void userdefine()
{
	cout<<"this is userdefine function"<<endl;
}

int user()
{
	return 6;
}

int main(int argc, char const *argv[])
{
	cout<<cbrt(27)<<endl;
	cout<<ceil(27.8)<<endl;
	cout<<abs(-27.3)<<endl;
	cout<<cos(sqrt(2))<<endl;
	userdefine();
	cout<<user();
	cout<<endl;
	cout<<exp(4);


	return 0;

}

// void userdefine()  This will give error becouse userdefined function 
// {
// 	cout<<"this is userdefine function"<<endl;
// }