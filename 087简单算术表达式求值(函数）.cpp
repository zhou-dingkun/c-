#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int p=0;
int js(int a,char f, int b) {
	int fh;
	switch(f) {
		case '+':
			fh=a+b;
			break;
		case '-':
			fh=a-b;
			break;
		case '*':
			fh=a*b;
			break;
		case '/':
			if(b!=0) {
				fh=a/b;
			} else {
				p=1;
				cout<<"�������"<<endl;
			}
			break;
		case '%':

			if(b!=0) {
				fh=a%b;
			} else {
				p=1;
				cout<<"�������"<<endl;
			}
			break;
		default:
			cout<<"�������"<<endl;
			p=1;
			break;

	}
	return fh;

}
int main() {
	system("title ���������ʽ��ֵ");
	int a,b;
	char f;
	cout<<"������������ʽ��ֵ"<<endl;
	cin>>a>>f>>b;
	if(p==0) {
		cout<<js(a,f,b)<<endl;
	} else {
		return 0;
	}
}
