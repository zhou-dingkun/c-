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
	system("title ��x^n");
	int n;
	cout<<"��x^n��������x��n��ֵ"<<endl;
	cin>>x>>n;
	cout<<x<<'^'<<n<<'='<<dg(n)<<endl;
}

