#include <iostream>
using namespace std;
int main()
{
   int var=5;
   // 1st it will increased value by 1 and then print it 6
   cout << ++var << endl;
   // 5 is displayed then, var is increased to 6.
   cout << var++ << endl;
   // Initially, var = 6. It is increased to 7 then, it is displayed.
   cout << ++var << endl;
   return 0; 
}

//   output is 6 6 8