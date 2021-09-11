#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char ch[6]= {'A','B','C','D','E','F'};
void jzzh(int a,int b);
int main() {
	system("title 进制转换");
	int n;
	cout<<"输入要转换为2，8，16进制的数"<<endl;
	cin>>n;
	jzzh(n,2);
	jzzh(n,8);
	jzzh(n,16);
}
void jzzh(int a,int b) {
	int jg[17],i,j,k=0;
	cout<<"结果"<<endl; 
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
