#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b; 
	if(a<=1&&a>=-1&&b<=1&&b>=-1) {
		cout<<"Yes"; 
	}
	else
	{
		cout<<"No";
	}
}
/*有一个正方形，四个角的坐标分别是（1，
-1），（1，1），（-1，-1），（-1，1）。写
一个程序，判断一个给定的点（x,y）是否在这个正方
形内（包括正方形边
界），如果在正方形内输出“Yes”，否则输出“No”。
*/
