#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int main()
{
	int shuru,n=0;
	while(scanf("%d",&shuru)==1)/*Scanf�����������з���ֵ
	�����ж�������ʱ��ֵΪ1.
	�������ʱ���س���û���õģ�Ҫctrl+Z��س��ͻ����*/ 
    {
	a[n++]=shuru;
	}
	for(int i=n-1;i>=0;--i)
	{
	b[i]=a[n];
	 
	}
}
