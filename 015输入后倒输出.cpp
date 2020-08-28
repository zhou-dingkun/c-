#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int main()
{
	int shuru,n=0;
	while(scanf("%d",&shuru)==1)/*Scanf输入语句可以有返回值
	，当有东西输入时，值为1.
	输入结束时，回车是没有用的，要ctrl+Z后回车就会结束*/ 
    {
	a[n++]=shuru;
	}
	for(int i=n-1;i>=0;--i)
	{
	b[i]=a[n];
	 
	}
}
