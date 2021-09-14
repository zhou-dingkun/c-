#include<iostream>
using namespace std;
int zdgys(long long x,long long y) {
	if(y>x) {
		int temp=x;
		x=y;
		y=temp;
	}
	int r=x%y;
	while(r) {
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
int main() {
	long long n,m;
	cin>>m>>n;
	if(zdgys(m,n)==1) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}
