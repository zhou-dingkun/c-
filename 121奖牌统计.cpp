#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[11];
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	sort(a+1,a+11);
	int sum=0;
	for(int i=2;i<=9;i++)
	{
		sum+=a[i];
	}
	cout<<fixed<<setprecision(3)<<double(sum/8.0)<<endl;
}
