#include <bits/stdc++.h>
using namespace std;

class car
{
public:
	 int price;
	 char color;
	 int speed;

	 car()
	 {
	 	cout<<"1st constructor is called "<<endl;
	 }

	 car(int p, char clr)
	 {
	 	cout<<"2nd constructor is called "<<endl;
	 }
	 car(int p, char clr, int spd)
	 {
	 	cout<<"3rd constructor is called "<<endl;
	 }

};

int main(int argc, char const *argv[])
{
	//car c;
	char cl;
	//car c(100, 200);
	car c(100, cl, 200);

	return 0;
}