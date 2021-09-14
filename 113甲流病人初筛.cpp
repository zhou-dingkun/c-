#include<bits/stdc++.h>
using namespace std;
struct node {
	double cj;
	string name;
	bool kc;
	bool sf=0;
};
node a[201];
int main() {
	int sum=0;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].cj>>a[i].kc;
		if(a[i].cj>=37.5&&a[i].kc) {
			a[i].sf=1;
			sum++;
		}
	}
	cout<<sum<<endl;
	for(int i=1;i<=n;i++){
		if(a[i].sf){
			cout<<a[i].name<<endl;
		}
	}
}
