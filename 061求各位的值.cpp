#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	if(n==0) {
		cout<<n<<endl;
	} else {
		while(n) {
			cout<<n%10<<endl;
			n/=10;
		}
	}
}

