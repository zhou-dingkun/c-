#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long x,sum=0,n;
	cin>>x;
	while(x!=0)
	{	x=x/10;
	n=x%10;
	sum=sum+n;

	}
   cout<<sum;
}
