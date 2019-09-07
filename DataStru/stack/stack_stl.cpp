#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
	stack <int> st;

	cout<<st.empty()<<endl;
	st.push(500);
	//cout<<"top element is : "<<st.top()<<endl;
	st.push(400);
	st.push(300);
	st.push(200);
	st.push(100);
	cout<<"top element is : "<<st.top()<<endl;
	cout<<st.size()<<endl;

	return 0;
}