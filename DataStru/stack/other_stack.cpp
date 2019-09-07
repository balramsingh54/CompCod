#include <iostream>
#include <stack>

using namespace std;
int main(int argc, char const *argv[])
{
	stack <int> st1;
	stack<int> st2;
	cout<<endl;
	cout<<"****...stack 1 is going on ...****"<<endl;
	st1.push(100);
	cout<<st1.top()<<endl;
	st1.push(200);
	cout<<st1.top()<<endl;
	st1.push(300);
	cout<<st1.top()<<endl;
	st1.push(400);
	cout<<st1.top()<<endl;
	st1.push(500);
	cout<<st1.top()<<endl;

	cout<<"---------------------------"<<endl;

	for (int i = 1; i <6; ++i)
	{
		int x=st1.top();
		st2.push(x);
		st1.pop();
		cout<<st2.top()<<endl;

	}

	return 0;
}


/*  500
	400
	300
	200
	100
*/
