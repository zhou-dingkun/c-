#include <bits/stdc++.h>
using namespace std;
int main() {
	double c;
	long long n,s=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	 {
	 	cin>>c;
	 	if(c>=60) s++;
	 }
    cout<<s;
}
