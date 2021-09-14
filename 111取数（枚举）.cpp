#include<iostream>
#include<windows.h>
using namespace std;
enum fx {
    _up=0, 
    _down=1,
    _left=2,
    _right=3,
};
int bg[1001][1001];
int n,x,y,fx;
int main() {
	system("title  111取数（枚举）");
	cout<<"例7.6  取数。有一个N*N的二维网格，每格里面有1个整数。现在给定开始的位置（x,y）和方向（上、下、左、右之一），一直移动到网格的边界，计算移动过程中线路上格子里的数字和。输入格式： 1行，4个整数，第1个整数N，范围在[1…1000]，第2,3个整数是开始位置的坐标X和Y，表示在第X行Y列（编号1到N），第4个整数D表示方向，D=0表示向上，D=1表示向下，D=2表示向左，D=3表示向右；下面N行，每行n个整数，范围在[-1000…1000]。"<<endl;
	cout<<"输入n，x，y，d"<<endl;
	cin>>n>>x>>y>>fx;
	cout<<"输入二维网格"<<endl;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>bg[i][j];
		}
	}
	int sum;
	switch(fx){
		case _up:
			for(int i=x;i>0;i--){
				sum+=bg[i][y];
			}
			break;
		case _down:
			for(int i=x;i<=n;i++){
				sum+=bg[i][y];
			}
			break;
		case _left:
			for(int i=y;i>0;i--){
				sum+=bg[x][i];
			}
			break;
		case _right:
			for(int i=y;i<=n;i++){
				sum+=bg[x][i];
			}
			break;
	}
	cout<<"和："<<endl; 
	cout<<sum<<endl;
}/*
4 2 3 2
1 2 3 4
5 9 8 7
8 2 7 4
6 6 3 8
*/
