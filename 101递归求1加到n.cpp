#include<bits/stdc++.h>
using namespace std;
int jf(int n);
int sum=0;
int main(){
	int n;
	cin>>n;
	cout<<jf(n)<<endl; 
}
int jf(int n){
	if(n==0){
		return sum;
	}else{
		return n+jf(n-1);
	}
}
