#include <iostream>
using namespace std;

int const N=5;

class Stack
{
	int arr[5]={0};
	int top;
public:
	Stack()
	{
		top=0;
	}

	void push(int data)
	{
		if (top==N)
		{
			cout<<"Stack is full";
			return;
		}
		else
		{
			arr[top]=data;
			top++;
		}
	}
};

int main(int argc, char const *argv[])
{
	Stack s1;
	s1.push(100);
	s1.push(200);
	s1.push(300);
	s1.push(400);
	s1.push(500);
	s1.push(600);

	return 0;
}