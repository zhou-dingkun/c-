#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int zh(int n,int m){
	int r;
	r=n%m;
	n=n/m;
	if(n!=0){
		zh(n,m);
	}
	cout<<a[r];
}
int main(){
	system("title µÝ¹é½øÖÆ×ª»»"); 
	int n,m;
	cin>>n>>m;
	zh(n,m);
}
