#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
long long int x;
int dg(int n){
	if(n==0)
	return 1;
	else
	return x*dg(n-1);
} 
int main(){
	system("title ��x^n");
	int n;
	cout<<"��x^n��������x��n��ֵ"<<endl;
	cin>>x>>n;
	cout<<x<<'^'<<n<<'='<<dg(n)<<endl;
}

