#include<bits/stdc++.h> 
using namespace std;
int pdss(long long int a); 
int main(){
 long long int a;
 cout<<"����һ����"<<endl;
 cin>>a;
 if(pdss(a)==0){
 	cout<<"�ⲻ������"<<endl; 
 }
 else{
 	cout<<"��������"<<endl; 
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
