#include <iostream>
using namespace std;
int fact(int n)
{
 if(n==0)
 {
     return 1;
 }
 else
 {
  return fact(n-1)*n;    
 }
 
}
int main()
{
    int t,N;
    cout<<"enter the number of testcase:";
    cin>>t;
    while(t--)
    {
        cout<<"enter the number of which factorial to be found:";
        cin>>N;
        cout<<"factorial of "<<N<<":"<<fact(N)<<endl;
    }
}