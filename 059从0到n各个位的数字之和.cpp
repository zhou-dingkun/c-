#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sum=0,m,x;
	for(int i=1;i<=n;i++)
	{
	
	x=m=i;
	while(m!=0)
	{
		x=m%10;
		m=m/10;
		sum=sum+x;
	}
}
	cout<<sum<<endl;
//本程序用来写从0到n所有数各个位的数之和 
}

