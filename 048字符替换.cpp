#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	system("title �ַ��滻"); 
	char a[201];
	int i=0;
	char x,y;
	cout<<"�����ַ���"<<endl; 
	while(((a[i++]=getchar())!='\n')); 
	cout<<"�����滻��"<<endl;
	x=getchar();
	getchar();
	y=getchar();
	for(int g=0;g<i;g++)
	{
		if(a[g]==x){
			cout<<y;
		}
		else
		{
			cout<<a[g];
			
		}
	}
}
