#include<iostream>
#include<windows.h>
using namespace std;
int a[10000];
int main() {
	int n,ge=0;
	system("title �󼸸�ͬѧ����"); 
	while(1){
	cout<<"�����м���ͬѧ"<<endl; 
	cin>>n;
	cout<<"�������ͬѧ�ķ���"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(a[i]>=60)
			ge++;
	}
	cout<<"��"<<ge<<"��ѧ������"<<endl;
}
}
