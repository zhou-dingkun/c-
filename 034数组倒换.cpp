#include<iostream>
#include<windows.h>
using namespace std;
int a[100],n;
int main() {
	system("title ���鵹��"); 
	cout<<"�������ĸ���n "<<endl;
	cin>>n;
	cout<<"����n����"<<endl; 
	for (int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n/2; i++){
		swap(a[i],a[n+1-i]);//�Ե�������swap 
	}
	cout<<"���"<<endl; 
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}

