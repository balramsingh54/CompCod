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
		if (front == rear)
		{
			return true;
		}
		return false;
	}

};

int main(int argc, char const *argv[])
{
	Queue <int>qu1;

	cout<<qu1.isEmpty()<<endl;


	return 0;
}





