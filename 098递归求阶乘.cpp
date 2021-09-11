#include<bits/stdc++.h>
#include<windows.h>
#include<jc.cpp>
using namespace std;
long long int x;
int dg(int x){
	if(x==0)
	return 1;
	else
	return x*dg(x-1);
} 
int main(){
	system("title 递归求阶乘");
	cout<<"求x的阶乘，请输入x的值"<<endl;
	cin>>x;
	cout<<x<<" 的阶乘"<<'='<<dg(x)<<endl;
	cout<<jc(x)<<endl;
}

