#include<bits/stdc++.h> 
using namespace std;
int main(){
	int m,n;
	cout<<"����m��n"<<endl;
	cin>>m>>n;
	int r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	} 
	cout<<"���Լ��"<<endl;
	cout<<n;
}//��ŷ������㷨����С��Լ�� 
