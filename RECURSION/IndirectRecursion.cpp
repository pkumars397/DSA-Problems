#include <iostream>
using namespace std;
int fun2(int n);
int fun1(int n)
{
    if(n>0)
    {
        cout<<" "<<n;
        fun2(n-1);
    }
    return 0;
}
int fun2(int n)
{
    if(n>0){
        cout<<" "<<n;
        fun1(n/2);
    }
    return 0;
}
int main()
{
    int a=10;
    fun1(a);
    cout<<" Thats it ,This is indirectRecursion";
}