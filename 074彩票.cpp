#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[3],b[3];
	gets(a);
	gets(b);
	if(a[0]==b[0]&&a[1]==b[1]) {
		cout<<"100"<<endl;
	} else {
		if(a[0]==b[1]&&a[1]==b[0]) {
			cout<<"20"<<endl;
		} else {
			char ch1=a[0],ch2=a[1],ch3=b[0],ch4=b[1];
			if(ch2==ch3) {
				cout<<"2"<<endl;
			}
			if(a[1]==b[1]) {
				cout<<"2"<<endl;
			}
			if(b[0]==a[1]) {
				cout<<"2"<<endl;
			}
			if(b[0]==a[0]) {
				cout<<"2"<<endl;
			} else
				cout<<"0"<<endl;
		}
	}
}

