#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	system("title 求兔子只数"); 
	long long int num;
	cout<<"输入要求几个月的数据。"<<endl;
	cin>>num;
	long long zs[num]={1,1};
	for(int i=2;i<=num;i++){
		zs[i]=zs[i-1]+zs[i-2];
}
	cout<<"输出"<<endl;
	cout<<"这是初始状态，有 "<<zs[0]<<" 只兔子。" <<endl;
	for(int i=1;i<=num;i++){
		cout<<"这是第 "<<i<<" 月，有 "<<zs[i]<<" 只兔子。" <<endl;
	}
}
