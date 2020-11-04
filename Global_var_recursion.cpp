#include <iostream>
using namespace std;
int var=0;
int fun(int n)
{
    //static int var=0;
    if(n>0)
    {
        var++;
        return fun(n-1) + var;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    int a=5;
    cout<<fun(a);
}