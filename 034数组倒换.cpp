#include<iostream>
#include<windows.h>
using namespace std;
int a[100],n;
int main() {
	system("title 数组倒换"); 
	cout<<"输入数的个数n "<<endl;
	cin>>n;
	cout<<"输入n个数"<<endl; 
	for (int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n/2; i++){
		swap(a[i],a[n+1-i]);//对调两个数swap 
	}
	cout<<"输出"<<endl; 
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}

