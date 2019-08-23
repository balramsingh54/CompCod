#include <bits/stdc++.h>
using namespace std;

// automatic variable 

// int main(int argc, char const *argv[])
// {
// 	auto int x=5;
// 	{
// 		auto int x=6;
// 		{
// 			auto int x=7;
// 			cout<<x<<endl;
// 		}
// 		cout<<x<<endl;
// 	}
// 	cout<<x;

// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	auto int x=5;
// 	{
// 		cout<<x<<endl;
// 		{
// 			cout<<x<<endl;
// 			auto int x=6;
// 			cout<<x<<endl;
// 		}
// 		cout<<x<<endl;
// 	}


// 	return 0;
// }

/// output is 1 2 3 

// void demo_static()
// {
// 	static int x=0;
// 	cout<<x<<endl;
// 	x++;
// }

// int main(int argc, char const *argv[])
// {
// 	demo_static();
// 	demo_static();
// 	demo_static();
// 	return 0;
// }

void demo_static()
{
	int x=0;
	cout<<x<<endl;
	x++;
}

int main(int argc, char const *argv[])
{
	demo_static();
	demo_static();
	demo_static();
	return 0;
}

/// output is 0 0 0 


