#include <iostream>
using namespace std;

class construct
{
public:
	construct()
	{
		cout<<"constructor is automatically fired! "<<endl;
	}
};

int main(int argc, char const *argv[])
{
	construct e1,e2;

	return 0;
}