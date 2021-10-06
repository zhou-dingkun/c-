#include<iostream>
using namespace std;
int main()
{ long long n,s=1;
  cin>>n; 
  for(int i=1;i<=n;i++)
  {
  	s=s*i;//s+=i;
  }
  cout<<s;
    
}
