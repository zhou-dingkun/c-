// exam5.1
#include <iostream>
using namespace std;

const int maxn=10000;

int main()
{
int a[maxn];
int i;
int n;

cout<<"����ĸ��� n="<<endl;
cin>>n;

cout<<"��ʼ�������� a[]="<<endl;
for(i=0;i<n;i++)
cin>>a[i];

cout<<"����a[]���"<<endl;
for(i=n-1;i>=0;i--)
cout<<a[i]<<endl;

	return 0;
}
