#include<iostream>
#include<windows.h>
using namespace std;
int jc(int);
int main(){
	system("title �׳�");
	int a; 
	while(1)
	{
		cout<<"����"<<endl;
	cin>>a;
	cout<<"�����"<<jc(a)<<endl;
	}
} 
int jc(int n)
{
	int y=1,he=0;
	for(int i=1;i<=n;++i)
	{ int y=1; 
		for(int j=1;j<=i;++j)
		{
			y*=j; 
		 } 
		 he+=y;
		 
	 } 
	 return he;
}
