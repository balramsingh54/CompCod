#include <bits/stdc++.h>
using namespace std;

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

int main(int argc, char const *argv[])
{
	auto int x=5;
	{
		cout<<x<<endl;
		{
			cout<<x<<endl;
			auto int x=6;
			cout<<x<<endl;
		}
		cout<<x<<endl;
	}


	return 0;
}

