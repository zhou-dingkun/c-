#include<bits/stdc++.h>
using namespace std;
int  jc(long long n)
{ long long s=1;
  for(int i=1;i<=n;++i)
   s*=i;
  return s;	
} 
