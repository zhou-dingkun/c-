#include<bits/stdc++.h>
using namespace std;
int a=0;
int js(int n);
int main() {
	int n;
	cin>>n;
	if(n==1||n==2) {
		cout<<n-1;
	}
	cout<<js(n);
}
int js(int n) {
	if(n==1)	{
		return 0;
	} else {
		if(n==2)
			return 1;
		else
			return js(n-1)+js(n-2);
	}
}
