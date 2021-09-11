#include<bits/stdc++.h>
using namespace std;
int main() {
	string name[1601];
	double t[201];
	bool ks[201];
	bool sf[201];
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		sf[i]=0;
	}
	for(int i=1; i<=n; i++) {
		cin>>name[i]>>t[i]>>ks[i];
		
	}
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(t[i]>=37.5&&ks[i]==1) {
			cout<<name[i]<<" ";
			sum++;
		}
	}
	cout<<sum<<endl;
}
