#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b; 
	if(a+b<10) {
		cout<<"water" ;
	} else {
		if(a>b) {
			cout<<"tree";
		} else {
			cout<<"tea";
		}
	}
}
