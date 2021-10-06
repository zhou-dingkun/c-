#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long s1,s2;
 s1=0;
 s2=0;
 for(int i=1;i<=100;++i)
  if(i%2==0) s1=s1+i;
  else s2=s2+i;
 cout<<"偶数的和等于："<<s1<<endl;
 cout<<"奇数的和等于："<<s2<<endl;
 } 
