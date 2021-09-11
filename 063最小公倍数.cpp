#include<bits/stdc++.h> 
using namespace std;
int main(){
	int m,n;
	cout<<"输入m，n"<<endl;
	cin>>m>>n;
	int r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	} 
	cout<<"最大公约数"<<endl;
	cout<<n;
}//用欧几里得算法求最小公约数 
