#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int jc(int n);
int main(){
	system("title ���������");
	int m,n,s;
	while(1){
	cout<<"����m��n"<<endl;
	cin>>m>>n;
	s=jc(m)/(jc(m-n)*jc(n));
	cout<<"�����"<<s<<endl<<endl;
}
}
int jc(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
	{
		t*=i;
	}
	return t;
}
/*��6.2  ���������C(m,n)��ֵ(n<=m<=10)��
   �������������C(m,n)�������Ϊ��m����������ȡ��n������������������������ֵ����һ������ļ��㷽����C(m,n)=m!/((m-n)!n!)��
*/
