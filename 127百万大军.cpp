#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;
	int a[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int b[n+1]={};
	for(int i=1;i<=n;i++){
		b[i]=1;
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==a[i+1][j]){
				b[j]++;
			}
		}	
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<' ';
	}
}
