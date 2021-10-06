#include<bits/stdc++.h> 
using namespace std;
int main()
{ int sum1=0,sum2=0,sum3=0;
  for(int i=1;i<=100;++i)
    sum1+=i;
  for(int i=1;i<=100;i+=2)
    sum2+=i;
  for(int i=2;i<=100;i+=2) i=i+2 
    sum3+=i;
 cout<<"1+2+3+бнбн+100="<<sum1<<endl;
 cout<<"1+3+5+бнбн+99="<<sum2<<endl;
 cout<<"2+4+6+бнбн+100="<<sum3<<endl;	
}
