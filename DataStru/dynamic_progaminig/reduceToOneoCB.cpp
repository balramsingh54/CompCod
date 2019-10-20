#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int reduceToOne(int n){
	int count = 0;
	if(n==1){
		return 0;
	}

	int count1 = INT_MAX,count2 = INT_MAX,count3 = INT_MAX;

	if(n%3==0){
		count1 = 1 + reduceToOne(n/3);
	}

	if(n%2==0){
		count2 = 1 + reduceToOne(n/2);
	}

	count3 = 1 + reduceToOne(n-1);

	return min(count1,min(count2,count3));
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<reduceToOne(n);
	return 0;
}