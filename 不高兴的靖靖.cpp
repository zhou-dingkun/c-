#include<bits/stdc++.h> 
using namespace std;
int main()
{ int x,y,a[8],max=0;
  for(int i=1;i<=7;++i)
  {
  	cin>>x>>y;
  	a[i]=x+y;
  	if(a[i]>max&&a[i]>8) 
  	 max=a[i];
   }
   for(int i=1;i<=7;i++)
   if((a[i]==max)&&(max>8)){
  cout<<i;exit(0); }
   if(max==0)cout<<"0";
}
