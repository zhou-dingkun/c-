#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
system("title ����"); 
	float a[10001],max;
	int n,x;
	cout<<"������"<<endl;
	cin>>n;
	cout<<"����"<<endl;
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
	cout<<"���㷽��һ"<<max<<endl;
	
	
	
	x=n+1;
	sort(a+1,a+x);
	cout<<"���㷽����"<<a[n]<<endl;
	return 0;
}
