#include <iostream>
using namespace std;
int SumNatural(int n)
{ 
  if(n==0)
  {
      return 0;
  }
  else{
   return SumNatural(n-1)+n;
   }
}
int main()
{   

    int t;
    int N;
    cout<<"enter the number of testcase:"<<endl;
    cin>>t;
    while(t--)
    {   
        cout<<"enter the Natural number:"<<endl;
        cin>>N;
        if(N==0)
        {
            return 0;
        }
        cout<<"Sum of "<<N<<" Natural Numbers : "<<SumNatural(N)<<endl;
    }
}