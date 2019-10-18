#include <bits/stdc++.h>
using namespace std;

template< typename T>

class node
{
public:
	string key;
	T value;
	node<T>* next;

	node(string k, T v)
	{
		key= k;
		value=v;
		next=NULL;
	}

};

template<typename T>

class hash_table
{
	int cs;
	int ts;
	node<T>** bucket;

	int has_func(string key)
	{
		int L= key.length();
		int current_Size=0;
		int max_Size=0;
		int m_factor=0;

		for (int i = 0; i < L; ++i)
		{
			int idx= key[L-i-1]*m_factor;
			m_factor = m_factor*37;
			m_factor = m_factor%max_Size;
			idx = idx%max_Size; 
		}
	}

};


int main(int argc, char const *argv[])
{
	
	return 0;
}