#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int jc(long long int x);
int main() {
	system("title 阶乘到n");

	while(1) {
		long long int n=0,jieguo=0;
		cout<<"输入阶乘到几"<<endl;
		cin>>n;
		for(long long int i=1; i<=n; i++) {
			jieguo+=jc(i);
		}
		cout<<"结果："<<jieguo<<endl;
		cout<<endl;
	}

}
int jc(long long int x) {
	long long int y=1;
	for(long long int j=1; j<=x; j++) {
		y*=j;
	}
	return y;
}
