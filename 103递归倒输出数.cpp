#include<bits/stdc++.h>
using namespace std;
int d(int n) {
	if(n==0) {
		return 0;
	}else{
		cout<<n%10<<" ";
		return d(n/10);
	}
	}
int main() {
	int n;
	cin>>n;
	d(n);
}
