#include<bits/stdc++.h>
using namespace std;
int m,n,sum=0;
void yd(); 
char cz(int a);
int main() {
	int l, l2, cnt=0, first=0;
	cin>>m>>n;
	int nc[m];
	int a[n];
	int ncws=0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(cz(a[i])=='f'&&ncws<=m) {
			nc[ncws]=a[i];
			ncws++;
			sum++;
		} else {
			if(ncws>m) {
				yd();
			} else {
			}
		}
	}
	cout<<sum<<endl;
}
char cz(int a) {
	int nc[m];
	for(int i=0; i<m; i++) {
		if(nc[i]==a) {
			return 't';
		}
	}
	return 'f';
}
void  yd() {
	int nc[m];
	for(int i=1; i<m; i++) {
		nc[i-1]=nc[i];
	}
	nc[m-1]=0;
}
