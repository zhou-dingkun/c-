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
	int n=0,t;
	cout<<"�����м������ţ�"<<endl;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cout<<"����� "<<i<<" �����ŵ�������"<<endl;
		cin>>t;
		j(t);
	}
	cout<<"��Ҫ "<<sum<<" Ԫ��"<<endl;
}/*
�������룺
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
 
