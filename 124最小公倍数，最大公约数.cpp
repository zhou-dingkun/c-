#include<iostream>
#include<mine.cpp>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	cout<<"����1"<<endl;
	cout<<zxgbs(a,b)<<' '<<zdgys(a,b)<<endl;
	//
	//
	//
	int zx;
	zx=a>=b?b:a;
	while(!(a%zx==0&&b%zx==0)) {
		zx--;
	}
	cout<<"����2"<<endl;
	cout<<"���Լ��"<<zx<<endl;
	cout<<"��С������"<<a*b/zx<<endl;
}
