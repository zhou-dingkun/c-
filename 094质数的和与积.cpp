#include<bits/stdc++.h>
using namespace std;
int pdss(long long int a) {
	if(a==2||a==1) {
		return 2;
	} else {
		int j=2;
		while(j<=sqrt(a)&&a%j!=0) {
			j++;
		}
		if(a%j==0)
			return 3;
		else
			return 2;//ÊÇËØÊý£»
	}
}
int main() {
	int n;
	int j;
	cin>>n;
	for(int i=(n/2); i<=n; i++) {
		j=n-i;
		if(pdss(i)==2&&pdss(j)==2) {
			cout<<i*j<<endl;
			return 0;
		}
	}
}

