#include<iostream>
#include<mine.cpp>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	cout<<"方法1"<<endl;
	cout<<zxgbs(a,b)<<' '<<zdgys(a,b)<<endl;
	//
	//
	//
	int zx;
	zx=a>=b?b:a;
	while(!(a%zx==0&&b%zx==0)) {
		zx--;
	}
	cout<<"方法2"<<endl;
	cout<<"最大公约数"<<zx<<endl;
	cout<<"最小公倍数"<<a*b/zx<<endl;
}
