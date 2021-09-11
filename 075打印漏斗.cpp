#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int j=1; j<=n; j++) {
		for(int i=1;i<=j-1;i++){
			cout<<' ';
		}
		for(int i=1;i<=2*n+1-2*j+2;i++){
			cout<<'A';
		}
		cout<<endl;
	}
	for(int j=1;j<=n;j++){
		cout<<' ';
	}
	cout<<'A'<<endl;
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n-j;i++){
			cout<<' ';
		}
		for(int i=1;i<=2*j+1;i++){
			cout<<'A';
		}
		cout<<endl;
	}
}
