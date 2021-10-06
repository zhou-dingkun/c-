#include<bits/stdc++.h> 
using namespace std;
int main()
{  
  int m,n,r,a;
  cin>>m>>n; 
  if(n>m)
  {a=m;  m=n;  n=a;
  }
  do 
  {
    r=m%n;
    m=n;
    n=r;
  }
  while(r!=0);
  cout<<"最大公约数是:"<<m; 
  return 0;   
}
