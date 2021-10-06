#include<iostream>
using namespace std;
int main()
{ long long n;
  double s=0,x;
  cin>>n; 
  for(int i=1;i<=n;i++)
  { cin>>x;
  	s=s+x; 
  }
  printf("%.2lf",s/n);    
}
