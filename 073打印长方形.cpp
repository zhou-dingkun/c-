#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,x;
	cin>>n>>m;
	for(int i=1; i<=n; ++i) {
		x=1;
		for(char ch='A'+i-1; ch>'A'; --ch) {
			if(x<=m) {
				cout<<ch;
				x++;
			}
		}
		for(char ch1='A'; ch1<='A'+m-i; ++ch1) {
			cout<<ch1;
			
		}
		cout<<endl;
	}
}
