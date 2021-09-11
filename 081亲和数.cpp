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
	cout<<"本程序计算最小的亲和数"<<endl;
	cout<<"亲和数："<<endl;
	cout<<"自然数a的因子是指能被a整除的所有自然数，但不含a本身。例如12的因子为：1,2,3,4,6。若自然数a的因子之和为b，而且b的因子之和又等于a，则称a,b为一对“亲和数” 。"<<endl; 
	int a=1;
	do {
		a++;
		if(ysh(ysh(a))==a&&a!=ysh(a)) {
			cout<<"最小的亲和数为("<<a<<"< >"<<ysh(a)<<')'<<endl;
			break;
		}
	} while(1);
}
