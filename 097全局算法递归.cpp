#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
long long int x,tt;
int dg(int n){
	if(n==0)
	return tt=1;
	else{
	dg(n-1);
	tt*=x;
	}
} 
int main(){
	system("title 求x^n");
	int n;
	cout<<"求x^n，请输入x，n的值"<<endl;
	cin>>x>>n;
	cout<<x<<'^'<<n<<'='<<dg(n)<<endl;
}

