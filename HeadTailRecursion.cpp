#include <iostream>
using namespace std;
int fun1(int n)
{
 cout<<n;
 fun(n-1);
}
int main()
{
 int x=3;
 fun1(x);
 }
 
