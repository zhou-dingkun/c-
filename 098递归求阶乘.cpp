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
	system("title �ݹ���׳�");
	cout<<"��x�Ľ׳ˣ�������x��ֵ"<<endl;
	cin>>x;
	cout<<x<<" �Ľ׳�"<<'='<<dg(x)<<endl;
	cout<<jc(x)<<endl;
}

