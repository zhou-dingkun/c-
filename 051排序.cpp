#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
system("title 排序"); 
	float a[10001],max;
	int n,x;
	cout<<"几个数"<<endl;
	cin>>n;
	cout<<"输入"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]<a[i+1])
		{
			max=a[i+1];
		}
	}
	cout<<"计算方案一"<<max<<endl;
	
	
	
	x=n+1;
	sort(a+1,a+x);
	cout<<"计算方案二"<<a[n]<<endl;
	return 0;
}
