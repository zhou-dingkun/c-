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
				cout<<"输入错误"<<endl;
			}
			break;
		case '%':

			if(b!=0) {
				fh=a%b;
			} else {
				p=1;
				cout<<"输入错误"<<endl;
			}
			break;
		default:
			cout<<"输入错误"<<endl;
			p=1;
			break;

	}
	return fh;

}
int main() {
	system("title 简单算术表达式求值");
	int a,b;
	char f;
	cout<<"输入简单算术表达式求值"<<endl;
	cin>>a>>f>>b;
	if(p==0) {
		cout<<js(a,f,b)<<endl;
	} else {
		return 0;
	}
}
