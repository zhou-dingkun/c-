#include<bits/stdc++.h>
using namespace std;
long long int n;
long long int zdgys(int x,int y) {
	if(x%y==0)
		return y;
	else {
		n=x%y;
		x=y;
		y=n;
		zdgys(x,y);
	}
}
int main() {
	long long int x,y;
	cin>>x>>y;
	if(x>y)
		cout<<zdgys(x,y);
	else
		cout<<zdgys(y,x);
}

