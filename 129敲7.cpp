#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> a;
	int sum,n,m;
	cin>>sum>>m>>n;
	for(int i=1;i<=sum;i++)
	a.push(i);
	while(a.front()!=m)
	{
		a.push(a.front());
		a.pop();
	}
	while(a.size()!=1)
	{
	   if(n%7==0||n%10==7||(n%10)/10==7||n/100==7)	
	   {
	   	a.pop();
	   	n++;
	   }
	   else
	   {
	   	a.push(a.front());
	   	a.pop();
	   	n++;
	   }
	}
	cout<<a.front();
 } 
