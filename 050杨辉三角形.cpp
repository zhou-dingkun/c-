#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	int a[11][11];
	a[1][1]=1;
	for(int i=2; i<=10;++i) {
		a[i][1]=1;
		a[i][i]=1;
		for(int j=2; j<=i-1; ++j) {
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=1;i<=10;i++)
	{
	if(i!=10){
		cout<<setw(30-3*i)<<" "; 
	}
	for(int f=1;f<=i;f++)
	{
		cout<<setw(6)<<a[i][f];
		cout<<endl;
	}
	}
}
