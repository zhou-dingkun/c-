#include<iostream>
#include<windows.h>
using namespace std;
int a[6];
int main() {
	system("title 冒泡法排序");
	while(1) {
		cout<<"输入5个数排序"<<endl;
		for(int i=1; i<6; i++) {
			cin>>a[i];
		}
		for(int i=1; i<6; i++) {
			for(int j=1; j<6-i; j++) {
				if(a[j]<a[j+1]) {
					swap(a[j],a[j+1]);//交换数组
				}
			}
		}

		for(int i=1; i<6; i++) {
			cout<<a[i]<<" ";
		}
		cout<<" "<<endl;
	}

}
