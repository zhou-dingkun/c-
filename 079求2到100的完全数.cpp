#include<bits/stdc++.h>
using namespace std;
int main() {
	int sum=0;
	for(int i=2; i<=100; i++) {

		for(int j=1; j<i; j++) {
			if(i%j==0) {
				sum+=j;
			}
		}
		if(sum==i) {
			cout<<i<<endl;
		}
		sum=0;
	}
}
