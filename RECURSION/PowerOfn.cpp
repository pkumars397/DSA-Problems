#include<iostream>
using namespace std;
/*int power(int m,int n)
{
  if(m==0){
      return 0;
  }
  else if(n==0)
  {
      return 1;
  }
  else{
      return power(m,n-1)*m;
  }
}*/
int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0){
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m,(n-1)/2);
    }
    return 0;
    
}



int main()
{
    int t,m,n;
    cout<<"enter the number of testcase:";
    cin>>t;
    while(t--){
        cout<<"enter m:";
        cin>>m;
        cout<<"enter n:";
        cin>>n;
        cout<<"power of "<<m<<" and "<<n<<":"<<pow(m,n)<<endl;
    }
    return 0;
}