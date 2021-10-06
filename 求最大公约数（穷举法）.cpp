#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int m,n,r;
  cin>>m>>n;
  if(n>m) {int temp=m;m=n;n=temp;}
  r=n;
  while(m%r!=0 || n%r!=0)
  r--;
  cout<<"最大公约数:"<<r;
  return 0;
  }

