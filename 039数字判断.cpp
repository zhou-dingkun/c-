#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b=0,c;
	cin>>a;
	if(a>=0) {
		b++; //¼ÓÎ»Êý
		if(a>=10) {
			b++;
			if(a>=100) {
				b++;
				if(a>=1000) {
					b++;
				}
			}
		}
	}
	c=b;
	cout<<c<<endl;
	if(b==1) {
		cout<<a;
	}
	if(b==2) {
		cout<<a/10<<endl;
		cout<<a%10;
	}
	if(b==3) {
		cout<<a/100<<endl;
		cout<<a%100/10<<endl;
		cout<<a%100%10;
	}
	if(b==4) {
		cout<<a/1000<<endl;
		cout<<a%1000/100<<endl;
		cout<<a%1000%100/10<<endl;
		cout<<a%1000%100%10;
	}
}
