#include<bits/stdc++.h>
using namespace std;
int ysh(int a) {
	int d=0;
	for(int i=1; i<a; i++) {
		if(a%i==0) {
			d+=i;
		}
	}
	return d;
}
int main() {
	cout<<"�����������С���׺���"<<endl;
	cout<<"�׺�����"<<endl;
	cout<<"��Ȼ��a��������ָ�ܱ�a������������Ȼ����������a��������12������Ϊ��1,2,3,4,6������Ȼ��a������֮��Ϊb������b������֮���ֵ���a�����a,bΪһ�ԡ��׺����� ��"<<endl; 
	int a=1;
	do {
		a++;
		if(ysh(ysh(a))==a&&a!=ysh(a)) {
			cout<<"��С���׺���Ϊ("<<a<<"< >"<<ysh(a)<<')'<<endl;
			break;
		}
	} while(1);
}
