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

	bool isfull()
	{
		if (top==N)
		{
			return true;
		}
		return false;
	}

	bool isEmpty()
	{
		if (top==0)
		{
			return true;
		}
		return false;
	}

	void push(T data)
	{
		if (!isfull())
		{
			arr[top]=data;
			cout<<arr[top]<<endl;
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
	st1.push(500);
	st1.push(400);
	st1.push(300);
	st1.push(200);
	st1.push(100);
	return 0;
}
