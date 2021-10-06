#include<bits/stdc++.h> 
using namespace std;
int jc(int n)
{ int s=1;
  for(int i=1;i<=n;++i)
    s*=i;
  return s; 
}
int main()
{long long x,sum=0;
 cin>>x;
 for(int i=1;i<=x;++i)
   sum+=jc(i);
 cout<<sum<<endl;
}
