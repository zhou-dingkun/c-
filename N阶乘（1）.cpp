#include<bits/stdc++.h> 
using namespace std;
int main()
{
  long long s;
  int n;
  s=1;
  cin>>n;
  cout<<n<<"!=1";
  for (int i=1; i<=n ; ++i) 
   {s*=i;
    cout<<"*"<<i;
   } 
  cout<<"="<<s;
  return 0;
}

