#include<iostream>
using namespace std;
int c[101];
int main() {
	int a=0,b,e=0;
	cout<<"Ҫ���뼸����"<<endl;
	cin>>a;
	for(int i=1; i<=a; i++) {
		cin>>c[i];
	}
	cout<<"��ʲô"<<endl;
	cin>>b;
	for(int d=1; d<101; d++) {
		if(b==c[d]) {
			e++;
		}
	}
	cout<<e;
}
