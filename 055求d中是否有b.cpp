#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
bool db(int x,int y);
int main()
{
	system("title 求d中是否有b");
	int a,b;
	while(1)
	{
	cout<<"输入d，b。求d中是否有b"<<endl; 
	cin>>a>>b;
	if(db(a,b)==true)
	cout<<"有"<<endl;
	else
	cout<<"无"<<endl;
	}
}
bool db(int x,int y)
{
	while(x)
	{
		if(x%10==y)return 1;
		x/=10; 
	}
	return false;
}
