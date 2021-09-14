#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	int sum=0;
	long long int i=1;
	while(i<=sqrt(n)) {
		if(n%i==0) {
			sum+=2;
		}
		i++;

	}
	if(i-1==sqrt(n)) {
		sum--;
	}
	cout<<sum<<endl;
}
