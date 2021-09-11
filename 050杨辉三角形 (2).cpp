#include<iostream>
#include<iomanip>
using namespace std;
int a[10000][10000];
int main()
{
	int x;
	cout<<"输入打印行数"; 
	cin>>x;
	a[1][1]=1;
	for(int i=2;i<=x;++i)
	{
		a[i][1]=1;a[i][i]=1;
	for(int j=2;j<=i-1;++j)
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	cout << "输出" << endl;
	for(int i=1;i<=x;i++)
	{
		if(i!=x)
		{
			cout<<setw(3*x-3*i)<<" ";
			for(int j=1;j<=i;j++) cout<<setw(6)<<a[i][j];
			cout<<endl;
		}
	}
}
