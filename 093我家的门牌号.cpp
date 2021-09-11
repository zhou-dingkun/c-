#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=1000;i++){
		for(int j=1;j<=i;j++){
			int sum=(1+i)*i/2;
			if((sum-j*2)==n){
				cout<<j<<' '<<i;
				return 0;
			}
		}
	}
}
