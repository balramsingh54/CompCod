#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int arr[3]={0};
    for(int i=0; i<=2;i++)
    {
        cin>>arr[i];
    }
 int max=0;
    for (int i = 0; i < 3; i++)
    {
    	max=max+arr[i];
    }
    cout<<"sum is "<<max;


    return 0;
}