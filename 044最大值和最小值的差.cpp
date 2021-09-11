#include<iostream>
#include<windows.h>
using namespace std;
int a[10001],n,ca=0;
int main() {
	system("title 最大值和最小值的");
	while(1) {
		cout<<"输入几个数"<<endl;
		cin>>n;
		cout<<"输入数字"<<endl;
		for(int i=1; i<n+1; i++ ) {

			cin>>a[i];
		}
		for(int i=1; i<n+1; i++) {
			for(int j=1; j<n+1-i; j++) {
				if(a[j]<a[j+1]) {
					swap(a[j],a[j+1]);//交换数组
				}
			}
		}
		ca=a[1]-a[n];
		cout<<"最大值-最小数的值为"<<ca<<endl;
	}
}
