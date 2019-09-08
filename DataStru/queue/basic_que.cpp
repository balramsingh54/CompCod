#include <iostream>
using namespace std;

template <typename T>

class Queue
{
	T* arr;
	int front;
	int rear;
	int cur_size;
	int max_size;
public:
	Queue(int de_size=5)
	{
		arr= new T[5];
		front = 0;
		cur_size=0;
		rear = max_size-1;
		max_size= de_size;
	}

	bool isEmpty()
	{
		if (cur_size == 0)
		{
			return true;
		}
		return false;
	}

	bool isFull()
	{
		if (cur_size==max_size)
		{
			return true;
		}
		return false;
	}

	void push(T data)
	{
		if (isFull())
		{
			cout<<"Queue is full:"<<endl;
			return;
		}
		else
		{
			rear=(rear+1)%max_size;
			arr[rear]=data;
			cur_size++;
		}
		
	}

};

int main(int argc, char const *argv[])
{
	Queue <int>qu1;

	cout<<qu1.isEmpty()<<endl;
	cout<<qu1.isFull()<<endl;
	qu1.push(100);
	qu1.push(200);
	qu1.push(300);
	qu1.push(400);
	qu1.push(500);
	qu1.push(600);
	qu1.push(700);
	qu1.push(800);
	cout<<qu1.isFull()<<endl;
	//cout<<arr[cur_size-1];

	return 0;
}






