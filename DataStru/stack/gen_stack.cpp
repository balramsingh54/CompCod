#include <iostream>
using namespace std;

int const N=5;

template< typename T>

class stack
{
	T *arr;
	int top;

public:
	stack()
	{
		arr= new T[5];
		top=0;
	}

	void isfull()
	{
		if (top==N)
		{
			cout<<"stack is full... "<<endl;
		}
	}

	void isEmpty()
	{
		if (top==0)
		{
			cout<<"stack is empty...";
		}
	}

	void push(T data)
	{
		if (!isfull())
		{
			arr[top]=data;
			top++;
		}
	}

	void pop()
	{
		if (!isEmpty())
		{
			top--;
		}
	}
};

int main(int argc, char const *argv[])
{
	stack <int> st1;
	st1.isEmpty();

	return 0;
}



