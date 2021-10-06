// exam5.1
#include <iostream>
using namespace std;

const int maxn=10000;

int main()
{
int a[maxn];
int i;
int n;

cout<<"输入的个数 n="<<endl;
cin>>n;

cout<<"开始输入数组 a[]="<<endl;
for(i=0;i<n;i++)
cin>>a[i];

cout<<"数组a[]输出"<<endl;
for(i=n-1;i>=0;i--)
cout<<a[i]<<endl;

	return 0;
}
