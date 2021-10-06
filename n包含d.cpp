#include<bits/stdc++.h>
using namespace std;
bool pd(int x,int y);
int main()
{
	int n,d;
	cin>>n>>d;
    if(pd(n,d)==true) cout<<"true";
    else cout<<"flase";
}
bool pd(int x,int y)
{ while(x)
  {
  	if(x%10==y) return true;
  	x=x/10;
  }
  return false;	
}
