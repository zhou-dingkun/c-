#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
bool db(int x,int y);
int main()
{
	system("title ��d���Ƿ���b");
	int a,b;
	while(1)
	{
	cout<<"����d��b����d���Ƿ���b"<<endl; 
	cin>>a>>b;
	if(db(a,b)==true)
	cout<<"��"<<endl;
	else
	cout<<"��"<<endl;
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
