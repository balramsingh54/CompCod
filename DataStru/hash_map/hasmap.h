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
	int current_Size=0;
	int max_Size=0;
	node<T>** bucket;

	int has_func(string key)
	{
		int idx=0;
		int L= key.length();
		int m_factor=1;

		for (int i = 0; i < L; ++i)
		{
			idx= idx+key[L-i-1]*m_factor;
			m_factor = m_factor*37;
			m_factor = m_factor%max_Size;
			idx = idx%max_Size; 
		}
		return idx;
	}

	hash_table(int default_size=7)
	{
		int max_Size=default_size;
		bucket= new node<T>* [default_size];

		for (int i = 0; i < max_Size; i++)
		 {
		 	bucket[i]=NULL;
		 } 
	}

};

int main(int argc, char const *argv[])
{
	
	return 0;
}