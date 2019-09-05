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
			cout<<"Stack is full"<<endl;
			return;
		}
		else
		{
			arr[top]=data;
			top++;
		}

	}
	void pop()
	{
		if (top==0)
		{
			cout<<"stack is empty ";
			return;
		}
		cout<<"deleted element is "<<arr[N]<<endl;

		top--;
		cout<<arr[N-1];
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
	s1.pop();
	s1.pop();

	return 0;
}