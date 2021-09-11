#include<bits/stdc++.h>
#include<windows.h> 
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
			return 2;
	}

}
int main() {
	freopen("既是回文数又是素数的三位数.txt","w",stdout);
	cout<<"既是回文数又是素数的三位数"<<endl;
	for(int i=100; i<=999; i++) {
		int a=i%10,c=i/100;
		if(pdss(i)==2) {
			if(a==c) {
				cout<<i<<endl;
			}
		}
	}
}
