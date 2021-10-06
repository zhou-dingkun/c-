#include<bits/stdc++.h>
using namespace std;
int main ()
{ int k,sum=0;
  cin>>k;
  for(int i=1;i<100;i++)
    for(int j=1;j<100;j++)
     if((4*i+3*j)>k) sum++; 
 cout<<sum;
}

