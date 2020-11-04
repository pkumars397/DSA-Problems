#include <iostream>
using namespace std;
int fun1(int n)
{
 if(n>0)
 {
  cout<<n;
  fun1(n-1);
  cout<<n<<n;
 }
}
int main()
{
 int x=3;
 fun1(x);
 }
 
