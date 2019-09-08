#include <iostream>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	queue <int> qu1;
	qu1.push(100);
	qu1.push(200);
	qu1.push(300);
	qu1.push(400);
	qu1.push(500);
	qu1.push(600);
	qu1.push(700);
	qu1.push(800);
	cout<<qu1.front()<<endl;
	int x= qu1.size();
	cout<<"----------------------"<<endl;
	for (int i = 0; i < x-1; i++)
	{
		qu1.pop();
		cout<<qu1.front()<<endl;
	}
	return 0;
}
