#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	system("title ������ֻ��"); 
	long long int num;
	cout<<"����Ҫ�󼸸��µ����ݡ�"<<endl;
	cin>>num;
	long long zs[num]={1,1};
	for(int i=2;i<=num;i++){
		zs[i]=zs[i-1]+zs[i-2];
}
	cout<<"���"<<endl;
	cout<<"���ǳ�ʼ״̬���� "<<zs[0]<<" ֻ���ӡ�" <<endl;
	for(int i=1;i<=num;i++){
		cout<<"���ǵ� "<<i<<" �£��� "<<zs[i]<<" ֻ���ӡ�" <<endl;
	}
}
