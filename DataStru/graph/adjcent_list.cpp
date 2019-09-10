#include <iostream>
#include <list>
using namespace std;

class graph
{
public:
	int V;
	list<int> *l;

	graph(int v)
	{
		this->V=v;
		l=new list<int> [v];
	}

	void addEdge(int u, int v, bool bidir=true)
	{
 		l[v].push_back(u);
 		if (bidir)
 		{
 			l[u].push_back(v);
 		}
	}

	void display()
	{
		for (int i = 0; i < V; i++)
		{

			
		}
	}
};

int main(int argc, char const *argv[])
{
	
	return 0;
}