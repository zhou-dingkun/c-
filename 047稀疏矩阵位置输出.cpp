#include<iostream>
#include<windows.h>
using namespace std;
int a[7][7],b[10][4],n=1;
int main() {
	system("title 列表加法");
	cout<<"输入"<<endl;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (a[i][j]!=0) {
				b[n][1]=i;
				b[n][2]=j;
				b[n][3]=a[i][j];
				n++; 
			}
		}
	}
	cout<<"输出"<<endl;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 3; j++) {
			cout << b[i][j]<<" ";
		}
		cout << endl;
	}


}
