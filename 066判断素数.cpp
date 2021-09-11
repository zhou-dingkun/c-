#include<bits/stdc++.h> 
using namespace std;
int pdss(long long int a); 
int main(){
 long long int a;
 cout<<"输入一个数"<<endl;
 cin>>a;
 if(pdss(a)==0){
 	cout<<"这不是素数"<<endl; 
 }
 else{
 	cout<<"这是素数"<<endl; 
 }
}
int pdss(long long int a){
	if(a==2||a==1){
		return 1;
	}else{
		int j=2;
		while(j<=sqrt(a)&&a%j!=0){
			j++;
		}
			if(a%j==0)
			return 0;
			else
			return 1;
	}
	
}
