#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char ch[6]= {'A','B','C','D','E','F'};
void jzzh(int a,int b);
int main() {
	system("title ����ת��");
	int n;
	cout<<"����Ҫת��Ϊ2��8��16���Ƶ���"<<endl;
	cin>>n;
	jzzh(n,2);
	jzzh(n,8);
	jzzh(n,16);
}
void jzzh(int a,int b) {
	int jg[17],i,j,k=0;
	cout<<"���"<<endl; 
	if(a<0)
		cout<<"-";
	j=abs(a);
	do{
		k++;
		i=j%b;
		j/=b;
		jg[k]=i;
	}while(j!=0);
	for(int d=k;d>=1;--d){
		if(jg[d]<10)cout<<jg[d];
		else cout<<ch[jg[d]-10];
	}
	cout<<endl; 
}
