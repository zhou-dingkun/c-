#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> a;
	int sum,n=1;
	cin>>sum;
	for(int i=1;i<=sum;i++)
	a.push(i);
	while(a.size()!=1)
	{
	   if(n%3!=0)	
	   {
	   	a.push(a.front());
	   	a.pop();
	   	n++;
	   }
	   else
	   {
	   	a.pop();
	   	n++;
	   }
	}
	cout<<a.front();
 } 
