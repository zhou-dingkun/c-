#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sum=0;
	while(n!=1) {
		sum++;
		if(n%2==0) {
			n=n/2;
		} else {
			n=(3*n+1)/2;
		}
	}
	cout<<sum<<endl;
}
