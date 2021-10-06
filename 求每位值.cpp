#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,x,s=0;
 cin>>n>>x;
 do
 {cout<<n%10<<" ";
  if(n%10==x)s++;
 n=n/10;
 }while(n!=0);
 cout<<"\n"<<s;
}
 
