#include<iostream>
using namespace std;
int main()
{ int a,s=0;
  long long n; 
  cin>>n; 
  for(int i=1;i<=n;i++)
  {cin>>a;
   s=s+a;
  }
  printf("%ld个同学的总分： %d平均分：%0.2lf",n,s,1.0*s/n);    
}
