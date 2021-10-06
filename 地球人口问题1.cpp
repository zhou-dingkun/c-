#include<bits/stdc++.h> 
using namespace std;
int main()
{ float x,a,y,b,z;
  cin>>x>>a>>y>>b;
  z=(y*b-x*a)/(b-a);
  printf("地球可以承载：%.2f亿人",z);
  return 0;
}
