#include<iostream>
#include<windows.h>
using namespace std;
int a[10001],n,ca=0;
int main() {
	system("title ���ֵ����Сֵ��");
	while(1) {
		cout<<"���뼸����"<<endl;
		cin>>n;
		cout<<"��������"<<endl;
		for(int i=1; i<n+1; i++ ) {

			cin>>a[i];
		}
		for(int i=1; i<n+1; i++) {
			for(int j=1; j<n+1-i; j++) {
				if(a[j]<a[j+1]) {
					swap(a[j],a[j+1]);//��������
				}
			}
		}
		ca=a[1]-a[n];
		cout<<"���ֵ-��С����ֵΪ"<<ca<<endl;
	}
}
