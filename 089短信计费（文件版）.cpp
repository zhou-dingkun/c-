#include<bits/stdc++.h>
using namespace std;
double sum=0;
double j(int t) {
	if(t<=70) {
		sum+=0.1;
	} else {
		if(t%70==0)
			sum+=(t/70)*0.1;
		else {
			sum+=(t/70+1)*0.1;
		}
	}
}
int main() {
	freopen("结果.txt","w",stdout);
	freopen("输入.txt","r",stdin);
	int n=0,t;
	cout<<"输入有几条短信："<<endl;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>t;
		j(t);
	}
	cout<<"共要 "<<sum<<" 元。"<<endl;
}/*
样例输入：
10
39
49
42
61
44
147
42
72
35 
46 */ 
