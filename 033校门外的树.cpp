#include<iostream>
#include<windows.h>
using namespace std;
int a[201],L,M,c,shucu=0;
bool b[10001];
int main() {
	system("title У�������");
	cout<<"���������յ�L��������M "<<endl;
	cin>>L>>M;
	cout<<"���뷶Χ"<<endl;
    for(int i=1;i<=L;i++)
    {
    	b[i]=true;
	}
	for(int i=1; i<=M*2; i+=2) {
    cin>>a[i]>>a[i+1];
	}
	for(int i=1;i<=M;i++){
	for(int j=1;j<=a[i*2]-a[i*2-1]+1;j++)
	{
		if(b[a[i*2-1]+j]==true)
		{
		b[a[i*2-1]+j]=false;
		}
	}
	}
	for(int i=0;i<=L+1;i++)
	{
		if(b[i]==true)
		{
			shucu++;
		}
	}
	shucu++;
	cout<<"����"<<shucu<<"����"<<endl;
}

